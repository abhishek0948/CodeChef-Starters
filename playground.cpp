#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

pair<ll,ll> find_zeros(string &s) {
    ll zeros = 0;
    ll ones = 0;

    for(int i=0;i<s.length();i++) {
        if(s[i] == '0') {
            zeros++;
        } else {
            ones++;
        }
    }

    return {zeros,ones};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;

        ll max_zeros = 0;
        ll max_ones = 0;

        pair<ll,ll> p1 = find_zeros(s1);
        pair<ll,ll> p2 = find_zeros(s2);
        pair<ll,ll> p3 = find_zeros(s3);
        
        ll total_one = p1.second + p2.second + p3.second;
        ll total_zero = p1.first + p2.first + p3.first;

        if(total_one%n != 0) {
            cout<<"-1\n";
            continue;
        }

        if(total_zero%n != 0) {
            cout<<"-1\n";
            continue;
        }
        
        ll cost1 = min(p1.first,p1.second);
        ll cost2 = min(p2.first,p2.second);
        ll cost3 = min(p3.first,p3.second);
        
        ll max_cost = max(cost1,max(cost2,cost3));

        cout<<max_cost<<endl;
    }
}