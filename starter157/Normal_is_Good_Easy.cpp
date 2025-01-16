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
        for(int i=0;i<n;i++) cin>>v[i];

        ll ans = 0;
        ll l = 0;
        ll r = l;

        while(r<n && l<n ){
            while(r<n && v[r]==v[l]) r++;
            ll len = r - l;

            ans += (len*(len + 1))/2;
            l = r;
        }

        cout<<ans<<"\n";
    }
}