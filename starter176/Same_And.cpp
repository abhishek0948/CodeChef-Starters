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
        unsigned ll n,m;
        cin>>n>>m;

        unordered_set<unsigned ll> ans;
        ans.insert(n);

        for(int i=63;i>=0;i--) {
            unsigned ll check = (1ULL<<i) | n;
            if(check<=m && (check&n)==n) ans.insert(check);
        }

        if(ans.size()==1) cout<<"-1"<<"\n";
        else {
            cout<<ans.size()<<"\n";
            for(auto &it:ans) cout<<it<<" ";
            cout<<"\n";
        }
    }
}