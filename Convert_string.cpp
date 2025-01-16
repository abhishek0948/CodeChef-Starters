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
        string s;
        cin>>s;

        ll one_c=0,zero_c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one_c++;
            else zero_c++;
        }

        ll ans=0;
        for(int i=1;i<=n;i++){
            bool found = false;
            
            if ((one_c - i) <= 0) {
                ll temp = i - one_c;
                if(temp%2==0) {
                    found = true;
                    ans++;
                }
            }

            if ((zero_c - i) <= 0 && !found) {
                ll temp = i - zero_c;
                if(temp%2==0) ans++;
            }
        }
        
        cout<<ans<<"\n";
    }
}