#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach -
// 1. Store the indexes of the all elements in a map.
// 2. find the range of intervals of repeating elements.
// 3. Merge the intervals.
// 4. Iterate over the intervals and find cost for each interval.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vll v(n);
        for(auto &it:v) cin>>it;

        map<ll,vector<ll>> mp;

        for(ll i=0;i<n;i++){
            mp[v[i]].pb(i);
        }

        vector<vector<ll>> intervals;

        for(auto &it:mp){
            vector<ll> temp = it.second;
            if(temp.size() > 1) {
                intervals.push_back({temp[0],temp.back()});
            }
        }

        // Merging Intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<ll>> merged_intervals;

        if(intervals.size()==0){
            cout<<0<<'\n';
            continue;
        }

        sort(intervals.begin(),intervals.end());
        vector<ll> temp_interval = intervals[0];

        for(auto &it:intervals){
            if(it[0]<=temp_interval[1]) {
                temp_interval[1]=max(it[1],temp_interval[1]);
            } else {
                merged_intervals.push_back(temp_interval);
                temp_interval=it;
            }
        } 

        merged_intervals.push_back(temp_interval);

        ll ans = 0;
        for(auto &it:merged_intervals){
            ll start = it[0];
            ll end = it[1];
            set<ll> s;

            for(ll i=start;i<=end;i++){
                s.insert(v[i]);
            }

            ans+=s.size();
        } 

        cout<<ans<<"\n";
    }
}