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
        ll n,m;
        cin>>n>>m;

        vll arr(n);
        for(int i=0;i<m;i++)
            cin>>arr[i];

        vll k_shots;
        vll a_shots;

        for(int i=0;i<m;i++){
            if(arr[i]==1) a_shots.push_back(i);
            else if(arr[i]==2) k_shots.push_back(i);
            else {
                a_shots.push_back(i);
                k_shots.push_back(i);
            }
        }

        unordered_map<pair<int,int>,int> mp;
        int sz = k_shots.size() + a_shots.size();
        int k_sz = k.shots.size();
        int a_sz = a.shots.size();

        for(int i=0;i<sz;i++){
            for(int i=0;i<a_sz;i++){
                
            }
        }

    }
}