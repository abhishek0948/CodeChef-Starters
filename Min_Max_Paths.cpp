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
        ll n,src;
        cin>>n>>src;

        // vector<vector<pair<ll,ll>>> adj[n];
        // vector<vector<ll>> adj[n];

        for(int i=1;i<=n-1;i++){
            ll x,y;
            cin>>x>>y;

            // adj[x].push_back(y);
            // adj[y].push_back(x);
        }

        vll dist(n+1,1e5);
        dist[src]=0;

        if(src==1) {
            cout<<0<<" ";
            for(int i=2;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
            continue;
        }

        for(int i = 0 ; i<n ; i++ ){
            if(i+1==src) continue;
            if(i+1==1) dist[i+1] = src;
            else
                dist[i+1] = src + i + 1;
        }

        for(int i=1;i<=n;i++) cout<<dist[i]<<" ";
        cout<<"\n";
    }
}