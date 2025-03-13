#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    int s,l,xl,cs,cl,cxl;
	    cin>>s>>l>>xl>>cs>>cl>>cxl;
	    
	    int ans = 0;
	    
	    int temp1 = xl - cxl;
	    int temp2 = l - cl;
	    int temp3 = s - cs;
	    
	    if(xl >= cxl) {
	        ans += cxl;
	        l += (xl - cxl);
	    } else {
	        ans += xl;
	    }
	    
	    if(l >= cl) {
	        ans += cl;
	        s += (l - cl);
	    } else {
	        ans += l;
	    }
	    
	    if(s >= cs) {
	        ans += cs;
	    } else {
	        ans += s;
	    }
	    
	    cout<<ans<<"\n";
	}

}
