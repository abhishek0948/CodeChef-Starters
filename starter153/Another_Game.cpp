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
        vll v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }

        int i = n;
        while(v[i]==i){
            i--;
        }
        
        if(i<=0) {
            cout<<"0\n";
            continue;
        }
        
        cout<<i + 1<<"\n";
    }
}