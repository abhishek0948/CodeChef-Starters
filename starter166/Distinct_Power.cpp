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

        priority_queue<pair<ll,ll>> pq;
        for(int i=0;i<n;i++) {
            ll x;
            cin>>x;
            pq.push({x,i});
        }
        
        vll v(n);

        ll rank = 1;
        while(!pq.empty()) {
            auto it = pq.top();
            ll pos = it.second;
            v[pos] = rank++;
            pq.pop();
        }

        ll blocks = 0;
        for(int i=1;i<n;i++) {
            if(abs(v[i] - v[i-1]) == 1) blocks++;
        }

        cout<< n - blocks<<"\n";
    }
}