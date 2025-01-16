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
        ll n,k;
        cin>>n>>k;

        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll max_diffi= LLONG_MIN;

        for(int i=1;i<n;i++) max_diffi = max(max_diffi,v[i] - v[i-1]);

        if(n==1) {
            cout<<0<<"\n";
            cout<<v[0]<<"\n";
            continue;
        }

        if(k >= max_diffi) {
            cout<<"0\n";
            for(auto it:v) cout<<it<<" ";
            cout<<"\n";
            continue;
        }

        vll ans(n);
        ans[1] = (v[1] - 1);
        
        if(k>=ans[1] - v[0]){
            ans[0] = v[0];
        } else {
            ans[0] = ans[1] - k;
        }

        for(int i=2;i<n;i++){
            ll rem = v[i] - ans[i-1];
            if(k>=rem){
                ans[i] = v[i];
            }
            else {
                ans[i] = ans[i-1] + k;
            }
        }

        ll maxi = LLONG_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,ans[i] - v[i]);
        }

        cout<<maxi<<"\n";
        for(auto it:ans) cout<<it<<" ";
        cout<<"\n";
    }
}