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
        ll n,d;
        cin>>n>>d;

        vll arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        ll ans=0;
        
        int i=0;

        while(i<n){
            while(i<n && arr[i]<=d) i++;
            if(i==n) break;
            ans++;
            while(i<n && arr[i]>d) i++;
            if(i==n) break;
        }

        cout<<ans<<"\n";
    }
}