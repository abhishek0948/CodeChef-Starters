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
        ll n,m;
        cin>>n>>m;

        string s1,s2;
        cin>>s1>>s2;

        set<char> st;
        for(int i=0;i<n;i++) st.insert(s1[i]);
        for(int i=0;i<m;i++) st.insert(s2[i]);

        if(st.size()<26) cout<<"Yes\n";
        else cout<<"No\n";
    }
}