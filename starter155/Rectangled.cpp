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

        if(n<4) {
            cout<<"0\n";
            continue;
        }

        n = n/2;

        if(n&1){
            cout<<n/2 * ((n/2) + 1)<<"\n";
        }

        else{
            cout<<n/2 * n/2<<"\n";
        }
    }
}