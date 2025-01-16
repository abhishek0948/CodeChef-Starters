#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach - 1]We want to get distinct number from 1 - n in each row and col
//          - 2]for this start with 1-n in first row then shift the number by 1 in each iteration
//          - 3]But, now the diagonal sum of S2 will be greater than n(n+1)/2 , to we to swap a number with n
//              such that the diagonal sum becomes n(n+1)/2
//          - 4]x should be n*x=n(n+1)/2 , therefore x = (n+1)/2
//          - 5]Swap n with x in entire array

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<vll> v(n + 1,vll (n + 1,0));

        for(int col = 1;col<=n;col++) v[1][col] = col;

        for(int row=2;row<=n;row++) {
            for(int col=1;col<=n;col++) {
                if(v[row-1][col]+1 != n)
                    v[row][col] = (v[row - 1][col] + 1)%n;
                else 
                    v[row][col] = v[row-1][col] + 1;
            }
        }

        ll mid = (1+n)/2;
        for(int row=1;row<=n;row++) {
            for(int col=1;col<=n;col++) {
                if(v[row][col]==n) {
                    v[row][col]=mid;
                } else if(v[row][col]==mid) {
                    v[row][col]=n;
                }
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<'\n';
        }
        cout<<"\n";
    }
}