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

        vll v(n+1);

        ll maxi = INT_MIN;
        ll ans = 0;
        for(int i=0;i<n+1;i++){
            cin>>v[i];
            maxi = max(v[i],maxi);
            ans += v[i];
        }

        if(v[n] == maxi) {
            cout<<ans - maxi<<"\n";
            continue;
        }

        vll arr = v;
        sort(arr.begin(),arr.end());
        
        ll present_last = v[n];
        ll to_sub = v[n];

        auto it = find(arr.begin(), arr.end(), present_last);
        int present_idx = 0;

        if(it != arr.end()){
            present_idx = it - arr.begin();
        }

        for(int i=present_idx;i<n+1;i++) {
            if(arr[i] == present_last) 
                continue;
                
            if(arr[i]<=2*present_last){
                present_last = arr[i];
                to_sub = arr[i];
            }
            
            else {
                break;
            }
        }

        cout<<ans - present_last<<"\n";
    }
}