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
        unordered_map<int,ll> m;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }

        if(m.size()==1) cout<<"YES\n";

        if(m[0]>0 && m.size()==2) cout<<"YES"\n;

        else cout<<"NO\n";
    }
}