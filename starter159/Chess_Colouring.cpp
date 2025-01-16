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

        // If n is even then there are only two possible ways 
        if(n%2==0) {
            cout<<"2\n";
        } 
        // If n is odd then there will be one extra cell of white
        else {
            // If we start from (0,0) there are total [n*n/2 + 1]C[n*n/2] ways to color
            // If we start from (0,1) there is only one way 
            cout<< ((n*n + 1)/2) + 1<<"\n";
        }
    }
}