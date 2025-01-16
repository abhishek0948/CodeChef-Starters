#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach - 
// 1.See the path as a graph and find total cycle and length of each cycle
// 2.Now greedly merge the two min length and increase the cost as sum of two Cycles and keep doing till only one Cycle remains
// 3.That is the min cost

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vll v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            --v[i];
        }
        
        priority_queue<ll,vll ,greater<ll>> cycles;
        vector<bool> vis(n,false);

        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                ll cycle_len = 0;
                int k = i;
                while(!vis[k]){
                    vis[k] = true;
                    cycle_len++;
                    k = v[k];
                }

                cycles.push(cycle_len);
            }
        }

        ll ans = 0;
        while(cycles.size() > 1) {
            ll a = cycles.top();
            cycles.pop();
            ll b = cycles.top();
            cycles.pop();
            ll cost = a + b;
            cycles.push(cost);
            ans += cost;
        }


        cout<<ans<<"\n";
    }
}