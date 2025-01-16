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

        vll a(n);
        vll b(n);
        vector<pair<ll,ll>> non_sales;

        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;
        
        ll ans = 0;
        ll sales = 0;
        for(int i=0;i<n;i++) {
            if(b[i] < a[i]) {
                ans += b[i];
            } 
            else if(b[i] > a[i]) {
                non_sales.push_back({a[i],b[i]});
            }
            else if(b[i] == a[i]) {
                sales++;
                ans += b[i];
            }
        }
        
        sort(non_sales.begin(),non_sales.end());

        ll sz = non_sales.size();
        if((sz) % 2 == 0) {
            for(auto &it:non_sales) {
                ans += min(it.first,it.second);
            }
        } 
        else if((sz %2) != 0) {
            if(sales >= 1) {
                for(auto &it:non_sales) {
                    ans += min(it.first,it.second);
                }
            } 
            else if(sales<=0){
                for(int i=0;i<sz - 1 ;i++) {
                    ans += min(non_sales[i].first,non_sales[i].second);
                }
                if(sz > 0) {
                    ans +=  non_sales[sz - 1].second;
                }
            }
        }
        
        cout<<ans<<"\n";
    }
}