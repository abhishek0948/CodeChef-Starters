#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int x,y,k;
	    cin>>x>>y>>k;
	    
	    int curr_diff = abs(x-y);
	    
	    if(curr_diff == k) {
	        cout<<"0\n";
	        continue;
	    }
	    
	    bool found = false;
	    int curr_time = 0;
	    
	    if(curr_diff > k) {
    	    while(curr_diff >= 0) {
    	        curr_diff-=2;
    	        curr_time++;
    	        
    	        if(curr_diff==k) {
    	            found = true;
    	            break;
    	        }
    	    }
	    } else {
	        while(curr_diff < k) {
	            curr_diff += 2;
	            curr_time++;
	            
	            if(curr_diff==k) {
	                found = true;
	                break;
	            }
	        }
	    }
	    
	    if(found) cout<<curr_time<<"\n";
	    else cout<<"-1\n";
	}

}
