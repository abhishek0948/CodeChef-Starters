#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)
ll sz = 1e7 + 1;

vll spf(sz);

void seive() {
    for(ll i=2;i<sz;i++) spf[i] = i;

    for(ll i=2;i*i<sz;i++) {
        if(spf[i] == i) {
            for(ll j=i*i;j<sz;j+=i) {
                if(spf[j]==j) {
                    spf[j] = i;
                }
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive();

    ll t;
    cin>>t;
    while(t--){
        ll h,k;
        cin>>h>>k;

        ll ans = 0;
        
        ll x = h;
        while(x>1) {
            ans++;
            x/=spf[x];
        }

        x = k;
        while(x>1) {
            ans++;
            x=x/2;
        }

        cout<<ans<<"\n";
    }
}