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
        vll arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        if(n==3){
            cout<<"0\n";
            continue;
        }
        sort(arr.begin(),arr.end());
        ll ans = INT_MAX;

        ll a = abs(arr[0] - arr[n-1]);
        ll b = abs(arr[0] - arr[n-2]);
        ll c = abs(arr[0] - arr[n-3]);

        ll d = abs(arr[n-1] - arr[0]);
        ll e = abs(arr[n-1] - arr[1]);
        ll f = abs(arr[n-1] - arr[2]);

        ans = min(a,min(b,min(c,min(d,min(e,f)))));
        cout<<ans<<"\n";
    }
}