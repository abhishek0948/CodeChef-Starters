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
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        ll ans = 0;

        for(int i=0;i<n;i++){
            for(int k=max(0,i - 100) ; k <= min(n-1,i + 100);k++){
                int diff = abs(v[i] - v[k]) - abs(i - k);
                if(diff<0 || diff%2==1) continue;
                if(diff==0) {
                    ans += abs(i - k) + 1;
                    continue;
                }

                if(min(i,k) - diff / 2 >= 0) ans++;
                if(max(i,k) + diff /2 < n) ans++;
            }
        }

        cout << ans << "\n";
    }
}