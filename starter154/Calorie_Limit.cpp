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
        for(int i=0;i<n;i++)
            cin>>v[i];

        // sort(v.begin(),v.end());

        int ans = 0;
        for(int i=0;i<n;i++){
            if(k - v[i]>=0) {
                ans++;
                k-=v[i];
                if(k==0) break;
            }
            else if(k - v[i]<0) break;
        }

        cout<<ans<<"\n";
    }
}