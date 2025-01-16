#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;

    while (T--) {
        ll n;
        string s;
        cin >> n >> s;
        if(s=="0"){
            cout<<1<<"\n";
            continue;
        }
        
        int ans=0;
        
        ans = ans + (s[0]=='0');
        ans = ans + (s[n-1]=='0');
        
        cout<<ans<<"\n";
        
    }

    return 0;
}
