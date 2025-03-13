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
        
        ll total = 0;
        vll v(n);
        for(auto &it:v) {
            cin>>it;
            total+=it;
        }

        if(total <= x) {
            cout<<1<<"\n";
        }
        else if(total%x==0) {
            cout<<total/x<<"\n";
        } else {
            ll ans = total/x + 1;
            cout<<ans<<"\n";
        }
    }
}