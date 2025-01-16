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

        ll xored = 0;
        vll v(n);
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            xored^=x;
            v[i]=x;
        }

        ll ans = 0;
        for(ll i=0;i<=xored;i++){
            ll sum = 0;
            ll start_xor = i;

            for(int j=0;j<n;j++){
                if(start_xor==v[j]) sum+=v[j];
                else {
                    start_xor^=v[j];
                }
            }

            ans = max(ans,sum);
        }

        cout<<ans<<"\n";
    }
}