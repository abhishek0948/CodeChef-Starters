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

        ll maxi = INT_MIN,mini = INT_MAX;
        ll maxi_idx = 0,mini_idx=0;
        
        for(ll i=0;i<n;i++){
            if(v[i] >= maxi) {
                maxi = v[i];
                maxi_idx=i;
            }
            
            if(v[i] <= mini) {
                mini = v[i];
                mini_idx = i;
            }
        }

        if(mini_idx > maxi_idx) {
            cout<<"-1\n";
            continue;
        }

        cout<<n-2<<"\n";
        for(int i=0;i<n-2;i++) {
            cout<<"1 3\n";
        }
    }
}