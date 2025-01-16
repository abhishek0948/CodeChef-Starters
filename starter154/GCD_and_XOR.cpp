#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin>>t;
    
    while(t--){
        ll n,k;
        cin>>n>>k;
 
        vector<int>a(n);
        for(auto &i : a) cin >> i;

        set<int>s; 

        int g = 0;
        for(auto &i : a) g = __gcd(i, g), s.insert(i);

        int ranges = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == k) continue;
            else if(i == 0 || a[i - 1] == k) ranges++;
        }

        s.erase(k);

        if(s.size() == 0) cout << 0 << "\n";
        else if(g % k == 0 || (*s.begin() == *s.rbegin() && ranges == 1)) cout << 1 << "\n";
        else cout << 2 << "\n";
    }

}
