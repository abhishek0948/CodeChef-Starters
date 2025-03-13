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

        vll a(n), b(n);

        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;

        int idx = -1;
        for(int i=0;i<n;i++) {
            if(a[i] == b[0]) {
                idx = i;
                break;
            }
        }

        vector<pair<ll,ll>> temp;
        for(int i=0;i<n;i++) {
            temp.push_back({abs(a[i] - b[0]),a[i]});
        }

        sort(temp.begin(),temp.end());

        bool possible = true;

        for(int i=0;i<n;i++) {
            ll x = temp[i].second;

            if(x!=b[i]) {
                possible = false;
                break;
            }
        }

        if(possible) cout<<idx + 1<<"\n";
        else cout<<"-1\n";
    }
}