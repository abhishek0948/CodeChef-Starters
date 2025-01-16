#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        string s,t;
        cin>>s>>t;

        if(s==t){
            yes;
            continue;
        }

        ll a1 = 0, a2 = 0;
        for(int i=0;i<n;i++) a1 += s[i] == 'a';
        for(int i=0;i<m;i++) a2 += t[i] == 'a';

        if(a1 == a2 && a1>0) {
            ll b1 = 0,b2=0;

            for(int i=0;i<n;i++) {
                if(s[i] == 'a') break;
                else b1++;
            }

            for(int i=0;i<m;i++) {
                if(t[i] == 'a') break;
                else b2++;
            }

            b1 == b2 ? yes : no;
        } else {
            no;
        }

    }
}