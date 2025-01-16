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

        vll v(n);
        unordered_map<ll,vll> mp;

        for(int i=0;i<n;i++) {
            ll x;
            cin>>x;
            mp[x].push_back(i+1);
        }

        ll ans = 0;
        for(auto it:mp) {
            ans += it.second[it.second.size() - 1];
        }

        cout<<ans<<"\n";
    }
}