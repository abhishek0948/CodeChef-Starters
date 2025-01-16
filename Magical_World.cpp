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
        ll x,y,z;
        cin>>x>>y>>z;
        
        ll sq_area=z*z;
        ll rect_area=x*y;
        
        if(rect_area<=sq_area) {
            std::cout << 0 <<"\n";
        }
        
        else{
            if(x<=sq_area || y<=sq_area) cout<<1<<"\n";
            else cout<<2<<"\n";
        }
    }
}