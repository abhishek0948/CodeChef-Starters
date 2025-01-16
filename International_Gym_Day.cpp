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
        double d;
        ll x,y;
        cin>>d>>x>>y;
        d=d/100;

        if(y>=x){
            cout<<0<<"\n";
            continue;
        }
        
        bool possible = false;
        
        ll ans=0;
        // while(y>0){
        //     y--;
        //     ans++;
        //     double temp = (double)x * d;
        //     // cout<<ceil(temp)<<" ";
        //     x = x - ceil(temp);
        //     if(x<=y){
        //         possible=true;
        //         break;
        //     }
        // }
        // cout<<'\n';

        int i=1;
        while(i<=y){
            ll temp1 = y - i;
            double temp2 = (double)x * (double)i * d ;
            ll temp3 = x - ceil(temp2);
            // cout<<temp3<<" ";
            if((temp3)<=temp1){
                possible=true;
                ans = i;
                break;
            }
            i++;
        }
        // cout<<"\n";
        
        if(possible) cout<<ans<<"\n";
        else cout<<"-1\n";
    }
}