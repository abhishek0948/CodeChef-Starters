#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

ll mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        set<pair<ll,ll>> higher;
        set<pair<ll,ll>> lower;

        for(int i=0;i<n;i++) {
            ll x;
            cin>>x;
            if(x > 0) {
                higher.insert({i+1,x});
            }
            if(x < 0) {
                lower.insert({i+1,abs(x)});
            }
        }
        // cout<<"Printing higher:\n";
        // for(auto &it:higher) {
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        // cout<<"Printing lower:\n";
        // for(auto &it:lower) {
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        // cout<<"\n";

        ll ans = 0;

        while(!higher.empty() && !lower.empty()) {
            auto it1 = higher.begin();
            auto it2 = lower.begin();

            ll high = it1->second;
            ll high_idx = it1->first;
            ll low = it2->second;
            ll low_idx = it2->first;

            ll steps = abs(low_idx - high_idx);
            // ll steps = abs(low_idx - high_idx)%mod;

            if(high == low) {
                ans += (steps * high);
                // ans = ans%mod;
                higher.erase({high_idx,high});
                lower.erase({low_idx,low});
            } else if(high > low) {
                ans += (steps * (low));
                // ans += (steps * (low))%mod;
                // ans=ans%mod;
                lower.erase({low_idx,low});
                ll new_high = high - low;
                higher.insert({high_idx,new_high});
                higher.erase({high_idx,high});
            } else {
                ans += (steps * high);
                // ans += (steps * high)%mod;
                // ans=ans%mod;
                higher.erase({high_idx,high});
                ll new_low = low - high;
                lower.insert({low_idx,new_low});
                lower.erase({low_idx,low});
            }
        }

        cout<<ans<<"\n";
    }
}
