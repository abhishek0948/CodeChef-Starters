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

        vll b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        if(n==1) {
            cout<<"2\n";
            continue;
        }

        if(n==2) {
            cout<<b[1]<<" "<<b[1]<<"\n";
            continue;
        }
        
        vll a(n);
        a[0] = 2e6;
        ll sum = 2e6;

        for(int i=1;i<n;i++){
            a[i] = b[i] - sum + a[0];
            sum += a[i];
        }

        for(auto &it:a) cout<<it<<" ";
        cout<<"\n";
    }
}