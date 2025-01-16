#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach -
// 1]Check if the bitcount of the idx and the number are same for each index
// 2]If same for all indexes will be sorted
// 3]If not then can never be sorted

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        vll v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }
        
        bool possible = true;
        for(int i=0;i<n;i++) {
            if(__builtin_popcount(v[i])!=__builtin_popcount(i+1)) {
                possible = false;
                break;
            }
        }
        
        if(possible) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
