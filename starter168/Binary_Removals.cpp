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
        ll n,x,k;
        cin>>n>>x>>k;

        string s;
        cin>>s;

        ll inversions = 0;
        ll ones = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
            else {
                inversions += ones;
            }
        }

        if(inversions<=x && (inversions%k)==0) cout<<"1\n";
        else cout<<"2\n";
    }
}