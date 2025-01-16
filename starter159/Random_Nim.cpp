#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)


const int MOD = 1e9 + 7;

long long inv_mod(long long a, long long m) {
    long long m0 = m, x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,d;
        cin>>n>>d;

        vll piles(n);
        ll xored = 0;

        for(auto &it:piles) {
            cin>>it;
            xored ^= it;
        }

        // xored is non-zero thus A should make first move
        // if(xored!=0) {
        //     ll numerator = (d + 1) % MOD;
        //     ll denominator = (2*d) % MOD;
        //     long long res_inv = inv_mod(denominator,MOD);

        //     ll ans = (numerator * res_inv) % MOD;
        //     cout<<ans<<"\n";
        // } 
        // // xored is zero thus B should make first move
        // else {
        //     cout<<"0\n";
        // }
        
        ll numerator = (d + 1) % MOD;
        ll denominator = (2*d) % MOD;
        long long res_inv = inv_mod(denominator,MOD);

        ll ans = (numerator * res_inv) % MOD;
        cout<<ans<<"\n";
    }
}