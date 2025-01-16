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
        ll odd_c=0;
        ll even_c=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) even_c++;
            else odd_c++;
        }

        if(odd_c==0){
            cout<<0<<endl;
            continue;
        }

        if(odd_c==1){
            cout<<n<<"\n";
            continue;
        }

        //Min 2 odd_c
        ll ans = even_c + 1;
        odd_c = odd_c - 1;
        ans += odd_c/2;

        cout<<ans<<"\n";
    }
}