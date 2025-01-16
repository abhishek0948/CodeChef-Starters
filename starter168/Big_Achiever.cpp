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
        for(auto &it:v) cin>>it;

        vll ans(n,0);

        for(int i=n-1;i>=0;i--){
            bool found = false;
            for(int j=i;j>=0;j--){
                if(v[j]>v[i]) {
                    found=true;
                    break;
                }
            }

            if(!found) ans[i]=1;
        }

        for(auto &it:ans) cout<<it<<" ";
        cout<<'\n';
    }
}