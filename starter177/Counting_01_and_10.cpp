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

        ll ans = 0;
        set<ll> s;

        for(int i=1;i<n;i++) {
            ll max_possible = i * (n-i);

            if(s.find(max_possible) == s.end()) {
                s.insert(max_possible);
                ans += (max_possible + 1);
            }

        }

        ans++;
        cout<<ans<<"\n";
    }
}