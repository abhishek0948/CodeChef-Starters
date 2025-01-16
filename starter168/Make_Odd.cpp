#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string s,t;
        cin>>s>>t;

        ll ones = 0;
        ll zeros = 0;
        ll options = 0;

        for(int i=0;i<n;i++) {
            if(s[i]=='1' && t[i]=='1') ones++;
            else if(s[i]=='0' && t[i]=='0') zeros++;
            else options++;
        }

        if(ones&1) {
            cout<<"YES\n";
        } else {
            if(n-ones<=0) cout<<"NO\n";
            else {
                if(options>0) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}