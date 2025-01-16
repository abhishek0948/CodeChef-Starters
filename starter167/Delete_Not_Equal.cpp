#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

bool solve(string &s) {
    for(int i=1;i<s.length();i++) {
        if(s[i] != s[i-1]) return true;
    }

    return false;
}

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

        if(solve(s)) {
            cout<<"1\n";
        } else {
            cout<<n<<"\n";
        }
    }
}