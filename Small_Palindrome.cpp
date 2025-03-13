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
        ll x,y;
        cin>>x>>y;

        vector<char> v(x+y);
        ll s = 0;
        ll e = (x+y) - 1;

        while(x) {
            v[s] = v[e] = '1';
            s++;e--;
            x-=2;
        }

        while(y) {
            v[s] = v[e] = '2';
            s++;e--;
            y-=2;
        }

        for(auto &i:v) cout<<i;
        cout<<"\n";
    }
}