#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

ll mod=1e9 + 7;
ll expo(ll a,ll b){
    ll res=1;;
    while(b>0){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b=b>>1;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=0;
        
        //Main formula is 
        //Summation of ( 2^(n-i) * (i-1)^2 * (n-i+1) )
        for(int i=2;i<=n;i++){
            ll temp=1;
            temp*=expo(2,n-i);
            temp%=mod;
            temp*=(i-1);
            temp%=mod;
            temp*=(i-1);
            temp%=mod;
            temp*=(n-i+1);
            temp%=mod;
            ans+=temp;
            ans%=mod;
        }
        
        cout<<(2*ans)%mod<<"\n";
    }
}