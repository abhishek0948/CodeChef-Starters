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
        ll n,x;
        cin>>n>>x;

        // n is odd
        if(n&1) {
            ll odds = n/2 + 1;
            ll evens = n/2;

            if(x&1) {
                odds--;
                if(odds >= 1) {
                    cout<<odds<<"\n";
                } else {
                    cout<<"0\n";
                }
            } else {
                evens--;
                if(evens >= 1) {
                    cout<<evens<<"\n";
                } else {
                    cout<<"0\n";
                }
            }
        } 
        // n is even
        else {
            ll odds = n/2;
            ll evens = n/2;

            if(x&1){
                odds--;
                if(odds >= 1) {
                    cout<<odds<<"\n";
                } else {
                    cout<<"0\n";
                }
            } else {
                evens--;
                if(evens >= 1) {
                    cout<<evens<<"\n";
                } else {
                    cout<<"0\n";
                }
            }
        }
    }
}