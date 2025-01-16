#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

void solve(int i,int j,vector<vector<int>> &vec,int n,int m) {
    if(i>=n || j>=m) return ;
    vec[i][j] = 3;
    solve(i+1,j+1,vec,n,m); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;

        int i=0;int j=0;

        vector<vector<int>> vec(n,vector<int> (m,2));
        solve(i,j,vec,n,m);

        if(n>m){
            for(int i=m;i<n;i++){
                vec[i][0] = 3;
            }
        }

        else if(m>n) {
            for(int i=n;i<m;i++){
                vec[0][i] = 3;
            }
        }

        for(auto it:vec){
            for(auto j:it){
                cout<<j<<" ";
            }
            cout<<"\n";
        }
    }
}