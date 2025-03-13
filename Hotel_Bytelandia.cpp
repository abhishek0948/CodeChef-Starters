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

        vll arrival(n),departure(n);
        for(auto &it:arrival) cin>>it;
        for(auto &it:departure) cin>>it;

        vector<vector<ll>> intervals;
        for(int i=0;i<n;i++) {
            intervals.push_back({arrival[i],departure[i]});
        }

        sort(intervals.begin(),intervals.end());

        priority_queue<ll,vll,greater<ll>> pq;
        pq.push(intervals[0][1]);

        for(int i=1;i<intervals.size();i++) {
            ll arrival = intervals[i][0];
            ll departure = intervals[i][1];

            ll curr_min = pq.top();

            if(arrival < curr_min) {
                pq.push(departure);
            } else {
                pq.pop();
                pq.push(departure);
            }
        }

        ll ans = 0;
        while(!pq.empty()) {
            pq.pop();
            ans++;
        }
        
        cout<<ans<<"\n";
    }
}