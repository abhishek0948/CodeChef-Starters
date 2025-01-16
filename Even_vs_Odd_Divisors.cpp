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

        ll evens=0;ll odds=0;

        for(int i=1;i<=sqrt(n);i++) {
            if(n%i==0) {
                if(i%2==0) evens++;
                else odds++;

                if(i != (n/i)) {
                    if((n/i)%2==0) evens++;
                    else odds++;
                }
            }
        }

        if(evens > odds) cout<<"1\n";
        else if(evens<odds) cout<<"-1\n";
        else cout<<"0\n";
    }
}