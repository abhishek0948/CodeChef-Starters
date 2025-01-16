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
        ll n,k;
        cin>>n>>k;

        vll v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());

        vll a;vll b;
        ll cnt = 0;
        ll idx = n-1;

        for(int i=n-1;i>=0;i--){
            a.push_back(v[i]);
            cnt++;
            if(cnt>=k) {
                idx = i;
                break;
            }
        }

        ll s = 0;
        while(s<idx){
            b.push_back(v[s++]);
        }
        
        sort(a.begin(),a.end());
        // for(auto it:a) cout<<it<<" ";
        // cout<<"\n";
        // for(auto it:b) cout<<it<<" ";
        // cout<<"\n";

        int n1 = a.size();
        int n2 = b.size();
        ll ini_ans = a[0] + a[n1-1] + b[0] + b[n2-1];
        for(int i=0;i<n1-1;i++){
            ll temp = b[0]  + b[n2 - 1] + a[i] + a[n1 - 1];
            ini_ans = max(ini_ans,temp);
        }

        cout<<ini_ans<<"\n";
    }
}