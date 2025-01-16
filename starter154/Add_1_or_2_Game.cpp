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
        
        if(n==1){
            cout<<"ALICE\n";
            continue;
        }

        if(n%2==1){
            cout<<"BOB\n";
        }
        else{
            cout<<"ALICE\n";
        }
    }
}