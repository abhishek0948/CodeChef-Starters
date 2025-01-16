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

        string s;
        cin>>s;
        string t;

        for(int i=0;i<n;i++) {
            if(s[i]=='0') t.push_back('1');
            else t.push_back('0');
        }

        cout<<t<<"\n";
    }
}