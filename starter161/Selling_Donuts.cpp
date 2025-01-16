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
        ll n,m;
        cin>>n>>m;

        vll a(n+1);
        vll b(m);

        unordered_map<ll,ll> mp;

        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }

        for(int i=0;i<m;i++) {
            ll x;
            cin>>x;
            mp[x]++;
        }

        ll ans = 0;
        for(auto &it:mp) {
            ll x = it.first;
            ll y = it.second;

            if(a[x] < y) {
                ans += (y - a[x]);
            }
        }

        cout<<ans<<"\n";
    }
}