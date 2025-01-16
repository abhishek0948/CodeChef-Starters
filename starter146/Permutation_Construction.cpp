#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	
	while(t--){
	    long long n;
	    cin>>n;
	    
	    vll v(n);
	    
	    int k=1;int j=n;
	    for(int i=0;i<n;i++){
	        if(i%2) v[i]=j--;
	        else v[i]=k++;
	    }
	    
	    for(auto it:v) cout<<it<<" ";
	    cout<<"\n";
	}

}
