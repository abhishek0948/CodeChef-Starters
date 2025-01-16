#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach - 1]Fill the first n/2 rows with right swift starting row with 1-n
//          - 2]the sum of the element and its complement row should be (n+1)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<vll> v(n+1,vll (n+1,0));

        for(int col=1;col<=n;col++) {
            v[1][col] = col;
            v[n][col] = (n+1) - col;
        }

        for(int row=2;row<=n/2;row++) {
            for(int col=1;col<=n;col++) {
                if(v[row-1][col] + 1 != n) 
                    v[row][col] = (v[row-1][col]+1)%n;
                else 
                    v[row][col] = v[row-1][col] + 1;

                v[n-row+1][col] = (n+1) - v[row][col];
            }
        }

        for(int row=1;row<=n;row++) {
            for(int col=1;col<=n;col++) {
                cout<<v[row][col]<<" ";
            }
            cout<<"\n";
        }
    }
}