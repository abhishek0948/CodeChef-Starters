#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        unordered_map<long long,long long> m;
        for(auto it:v){
            m[it]++;
        }

        long long ans=INT_MAX;

        for(auto it:m){
            long long temp= (n - it.second) * it.first;
            ans=min(ans,temp);
        }
        
        long long temp=n;
        ans=min(ans,temp);
        cout<<ans<<endl;
    }
}