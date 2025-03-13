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
        ll n,c;
        cin>>n>>c;

        string s;
        cin>>s;

        map<char,ll> mp;
        for(auto &it:s) mp[it]++;

        vector<pair<ll,char>> v;
        for(auto &it:mp) v.push_back({it.second,it.first});
        sort(v.begin(),v.end(),greater<pair<ll,char>>());

        ll ans = INT_MAX;
        ll learning_c = 0;
        ll translated = 0;

        ll total_l_c = v.size()*c;
        ll t_c = (n*(n+1))/2;

        ans = min(total_l_c,t_c);

        for(auto &it:v) {
            learning_c += c;
            translated += it.first;
            ll t_c = ((n - translated) * (n - translated + 1)) / 2LL;
            ans = min(ans,learning_c + t_c);
        }

        cout<<ans<<"\n";
    }
}