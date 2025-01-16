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

        if((y - x) == (z - y)){
            cout<<"0\n";
        }

        else {
            cout<<"1\n";
        }
    }
}