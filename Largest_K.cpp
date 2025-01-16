#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long> arr(n);

        map<long long,long long> freq;
        
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }

        vector<long long> temp;
        
        for(auto i:freq){
            temp.push_back(i.second);
        }
        
        sort(temp.rbegin(),temp.rend());
        
        long long m=temp.size();
        long long taken=0;
        long long ans=0;
        
        for(int i=0;i<m;i++){
            taken+=temp[i];
            ans=max(ans,taken - (taken%(i+1)));
        }
        
        cout<<ans<<"\n";
    }
	
}