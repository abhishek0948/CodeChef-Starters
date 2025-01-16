#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)
ll mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll x1=0;
        ll x2,x3,k;
        cin>>x2>>x3>>k;
        
        ll sz = 1e6 ;
        ll *arr = new ll[sz];
        arr[0]=0;
        arr[1]=x2;
        arr[2]=x3;
        
        for(int i=3;i<sz;i++){
            arr[i] = (arr[i-1] + arr[i-2] - arr[i-3])%mod;
            arr[i] = arr[i]%mod;
        }
        // for(auto it:arr){
        //     cout<<it<<" ";
        // }
        // cout<<"\n";
        for(int i=2;i<sz;i=i+2){
            swap(arr[i],arr[i-1]);
        }
        // for(auto it:arr) cout<<it<<" ";
        // cout<<"\n";

        cout<<arr[k-1]<<"\n";
    }
}