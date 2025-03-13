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
        ll n,x;
        cin>>n>>x;

        vll v(n);

        for(int i=0;i<n;i++) {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        for(ll i=1;i<n;i++) {
            v[i] = v[i] + i*x; // Why x+=x NOT ?
        }

        ll ans = INT_MIN;
        for(int i=0;i<n;i++) {
            ans = max(ans,v[i]);
        }

        cout<<ans<<"\n";
    }
}