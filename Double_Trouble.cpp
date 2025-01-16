#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define vll vector<long long>
#define pb(x) push_back(x)
ll mod=1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        vll v(n);
        ll sum=0;
        priority_queue<ll,vector<ll>,greater<ll>> pq;

        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]=v[i]%mod;
            pq.push(v[i]);
        }
        
        while(k--){
            ll mini = pq.top();
            mini = mini%mod;
            pq.pop();
            ll two=2;
            mini = mini*two % mod;
            mini = mini%mod;
            pq.push(mini);
        }
        
        while(!pq.empty()){
            ll mini = pq.top();
            pq.pop();
            mini = mini%mod;
            // cout<<mini<<" ";
            sum = (sum%mod + mini%mod)%mod;
            sum = sum%mod;
        }
        // cout<<"\n";
        cout<<sum%mod<<"\n";
    }
}