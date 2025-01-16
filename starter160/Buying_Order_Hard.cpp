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

        cout<<1<<" ";
        for(int i=1;i<n;i++) {
            ll mini = b[0];
            ll maxi = b[i];

            
        }
    }
}