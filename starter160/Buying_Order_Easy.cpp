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
        vll b(n);

        for(auto &it:b) cin>>it;
        
        ll ans = (n - 2) * 2;
        if(b[0]==0 && b[n-1]==0) ans+=3;
        else if(b[0]==0 && b[n-1]==1) ans+=2;
        else if(b[0]==1 && b[n-1] == 0 ) ans += 3;
        else if(b[0] == 1 && b[n-1]==1) ans += 3;

        cout<<ans<<"\n";
    }
}