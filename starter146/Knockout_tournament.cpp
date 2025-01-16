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
        map<ll,pair<ll,ll>> m;
        vll arr(16);
        for(int i=0;i<16;i++){
            cin>>arr[i];
            m[arr[i]]={i,0};
        }
        
        map<ll,pair<ll,ll>>::iterator it;
        it=m.begin();
        
        it->second.second=0;
        it++;
        
        it->second.second=1;
        it++;
        it->second.second=1;
        it++;
        

        it->second.second=2;
        it++;
        it->second.second=2;
        it++;
        it->second.second=2;
        it++;
        it->second.second=2;
        it++;
        
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        it->second.second=3;
        it++;
        
        it->second.second=4;

        for(auto x:m){
            arr[x.second.first] = x.second.second;
        }
        
        for(auto y:arr) cout<<y<<" ";
        cout<<"\n";
    }
}