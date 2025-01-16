#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)
int main() {
	ll t;
	cin>>t;
    
    while(t--){
        ll a,b;
        cin>>a>>b;
        
        ll ans=0;
        while(a!=b){
            if(a>b){
                ll temp=a/2;
                ll rem=a%2;
                
                if(rem!=0) temp=temp+1;
                a-=temp;
                ans+=temp;
            }
            else{
                ll temp=b/2;
                ll rem=b%2;
                
                if(rem!=0) temp=temp+1;
                b-=temp;
                ans+=temp;
            }
        }
        
        cout<<ans<<"\n";
    }
}
