#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

ll shortest_distance(vector<vector<pair<ll,ll>>> &adj, ll &src ,ll &desti)
{
    int n = adj.size();
    vector<int> vis(n + 1, 0);
    
    queue<pair<int, int>> st;
    st.push({0, src});
    vis[src]=1;
    
    while (!st.empty())
    {
        auto it = st.front();
        int node = it.second;
        int path_dist = it.first;
        st.pop();

        if(node==desti) return path_dist;
        
        for (auto j : adj[node])
        {
            int adjNode = j.first;
            st.push({path_dist + 1,adjNode});
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<pair<int, int>> queries;
        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            queries.push_back({x, y});
        }

        // unordered_map<ll,list<ll>> adj;
        vector<vector<pair<ll,ll>>> adj(n + 1);

        for (int i = 0; i < n; i++)
        {
            ll temp = arr[i];
            int j = i + 1;
            int k = 1;
            if (temp == 0)
                continue;
            while (k != temp + 1)
            {
                adj[j].push_back({j + k,1});
                k++;
            }
        }

        for (int i = 0; i < q; i++)
        {
            ll x = queries[i].first;
            ll y = queries[i].second;
            
            ll ans = shortest_distance(adj, x , y);
            cout<<ans<<"\n";
        }
    }
}
