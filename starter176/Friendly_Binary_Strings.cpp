#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach : Rather than theating them strings seperate, treat them as a single block string
// therefore possible blocks are (1,1), (0,0), (1,0) or (0,1)
// swap inside (1,1) or (0,0) is useless
// try to find if it possible to make palindrome of this blocks

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string a,b;
        cin>>a>>b;

        ll ones_block = 0;
        ll zeros_block = 0;
        ll mix_blocks = 0;

        for(int i=0;i<n;i++) {
            if(a[i]=='1' && b[i]=='1') {
                ones_block++;
            } else if(a[i]=='0' && b[i]=='0') {
                zeros_block++;
            } else {
                mix_blocks++;
            }
        }

        if(n&1) {
            if(ones_block%2==0 && zeros_block%2==0 && mix_blocks%2==1) {
                cout<<"YES\n";
            } else if (ones_block%2==0 && zeros_block%2==1 && mix_blocks%2==0) {
                cout<<"YES\n";
            } else if(ones_block%2==1 && zeros_block%2==0 && mix_blocks%2==0) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        } else {
            if(!(ones_block&1) && !(zeros_block&1) && !(mix_blocks&1)) {
                cout<<"YES\n";
            } else {
                cout<<"NO\n";
            }
        }
    }
}