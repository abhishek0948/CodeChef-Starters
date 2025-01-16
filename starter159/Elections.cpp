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
        ll n,x;
        cin>>n>>x;

        vll a(n);
        vll b(n);

        for(auto &it:a) cin>>it;
        for(auto &it:b) cin>>it;

        ll states = n/2 + 1;
        ll wins = 0;
        vll to_wins;

        for(int i=0;i<n;i++) {
            if(a[i] > b[i]) {
                wins++;
            }
            else {
                to_wins.push_back(b[i] - a[i] + 1);
            }
        }

        if(wins >= states) {
            cout<<"YES\n";
            continue;
        }

        sort(to_wins.begin(),to_wins.end());

        for(int i=0;i<to_wins.size();i++) {
            if(x - to_wins[i] >= 0) {
                wins++;
                x-=to_wins[i];
            } else {
                break;
            }
        }
        
        if(wins >= states) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }

    }
}