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
        cin>>n,m;
        string s1,s2;
        cin>>s1>>s2;

        if(n<m || s1[0]!=s2[0]){
            cout<<"-1\n";
            continue;
        }

        if(s1==s2){
            cout<<"0\n";
            continue;
        }

        
    }
}