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
        string s1,s2;
        cin>>s1>>s2;
        
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());

        ll idx = s1.find(s2);

        cout<<idx<<"\n";
    }
}