#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

bool ispalin(string &s) {
    int i=0;int j=s.length()-1;

    while(i<=j) {
        if(s[i]!=s[j]) return false;
        i++;j--;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;

        if(ispalin(s)) {
            cout<<0<<"\n";
            continue;
        }

        string right = s.substr(1,n);
        string left = s.substr(0,n-1);

        bool right_del = ispalin(right);
        bool left_del = ispalin(left);

        if(!right_del || !left_del) {
            cout<<1<<"\n";
        } 
        else if(right_del && left_del) {
            cout<<-1<<"\n";
        }
    }
}