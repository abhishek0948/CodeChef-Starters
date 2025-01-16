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
        vector<pair<int,int>> edges;
        for(int i=1;i<n;i++){
            int x,y;
            cin>>x>>y;
            edges.push_back({x,y});
        }

		unordered_map<ll,list<ll>> adj;
        for(int i=0;i<edges.size();i++){
            int u = edges[i].first;
            int v = edges[i].second;
			adj[u].push_back(v);
			adj[v].push_back(u);
        }
        
        ll left_nodes = 0;
        for(int i=1;i<=n;i++){
            if(adj[i].size()==1) left_nodes++;
        }
        
        ll internal_nodes = n - left_nodes;
        
        cout<<3*left_nodes + 2*internal_nodes<<'\n';
    }
}