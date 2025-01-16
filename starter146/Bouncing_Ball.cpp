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

        vll v(n);
        ll zeros=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) zeros++;
        }
        
        if(zeros==n){
            cout<<2*zeros<<"\n";
            continue;
        }
        
        vll pre(n);
        vll suff(n);

        pre[0]=v[0];
        suff[n-1]=v[n-1];

        for(int i=1;i<n;i++){
            pre[i] = pre[i-1] + v[i];
        }

        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1] + v[i];
        }

        ll ans=0;

        for(int i=0;i<n;i++){
            if(i==0 && v[i]==0 && suff[1]==1) ans++;
            else if(i==n-1 && v[i]==0 && pre[n-2]==1) ans++;
            else if(v[i]==0){
                if((pre[i-1] - suff[i+1] == 1) || (pre[i-1] - suff[i+1] == 0)) ans++;
                if((suff[i+1] - pre[i-1] == 1) || (suff[i+1] - pre[i-1] == 0)) ans++;
            }
        }
        
        cout<<ans<<"\n";
    }
}