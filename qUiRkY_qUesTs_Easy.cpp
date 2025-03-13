#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define vll vector<long long>
#define pb(x) push_back(x)

ll find_sum(vll &v) {
    ll sum = 0;
    for(ll i=0;i<v.size();i++) sum+=v[i];
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vll v(n);
        for(auto &it : v) cin >> it;

        sort(v.begin(), v.end());

        ll mex = 0;
        for(ll i = 0; i < n; i++) {
            if(v[i] != i) {
                mex = i;
                break;
            }
        }

        if(mex==0) {
            ll sum = find_sum(v);
            ll ans = n * n;
            ans = max(ans,sum);
            cout<<ans<<"\n";
        }
        else if(mex == 1) {
            for(int i=1;i<n;i++) {
                if(v[i]<mex) {
                    v[i] = mex;
                    mex++;
                }
            }
            ll sum = find_sum(v);
            ll ans = n * n;
            ans = max(n * n, sum);
            cout << ans << "\n";
        } else {
            for(ll i = 0; i < n; i++) {
                if(v[i] < mex) v[i] = mex;
            }

            ll sum = find_sum(v);
            ll ans = n*n;
            ans = max(ans,sum);
            cout << ans << "\n";
        }
    }
    return 0;
}
