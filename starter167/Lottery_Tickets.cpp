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
        for(auto &it:v) cin>>it;

        ll chef = v[0];

        ll upper = 1e6; 
        ll lower = 1;

        sort(v.begin(),v.end());

        ll ans = 0;
        if(v[n-1] == chef) {
            ans += (upper - chef);
            ll avg = (chef + v[n-1]) / 2;
            ans += abs(chef - avg);

            lower = v[n-2];
            ll avg2 = 0;
            if((chef + lower)%2) {
                avg2 = (chef + lower) / 2;
                ans += abs(chef - avg2);
            } else {
                avg2 = (chef + lower) / 2;
                ans += abs(chef - avg2);
                ans += 1;
            }
        } else if(v[0] == chef) {
            ll avg = (chef + v[1]) /2;
            ans += abs(chef - avg);
            ans += chef;
        } else {
            ll idx = 0;
            for(int i=0;i<n;i++) {
                if(v[i] == chef) {
                    idx = i;
                    break;
                }
            }

            lower = v[idx - 1];
            upper = v[idx + 1];

            ll avg1 = (chef + upper)/2;
            ans += abs(avg1 - chef);

            ll avg2 = 0;
            if((chef + lower)%2) {
                avg2 = (chef + lower) / 2;
                ans += abs(chef - avg2);
            } else {
                avg2 = (chef + lower) / 2;
                ans += abs(chef - avg2);
                ans += 1;
            }
        }

        cout<<ans<<"\n";
    }
}