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
        vector<pair<ll,ll>> all_ranges;
        
        for(auto &it:v) cin>>it;
        sort(v.begin(),v.end());

        for(int i=1;i<n;i++){
            ll mini = v[i] - v[i-1];
            ll maxi = v[i] + v[i-1];
            all_ranges.push_back({mini+1,maxi-1});
        }
        
        if(all_ranges.size() == 0) {
            cout<<0<<"\n";
            continue;
        }
        
        sort(all_ranges.begin(),all_ranges.end());

        vector<pair<ll,ll>> temp;
        temp.push_back(all_ranges[0]);
        vector<pair<ll,ll>> merged;

        for(auto &it:all_ranges){
            if(it.first <= temp[0].second) {
                temp[0].second = max(it.second,temp[0].second);
            }

            else {
                merged.push_back(temp[0]);
                temp[0] = it;
            }
        }
        
        merged.push_back(temp[0]);

        ll ans = 0;
        for(auto it:merged) {
            ans += (it.second - it.first + 1);
        }
        cout<<ans<<"\n";
    }
}