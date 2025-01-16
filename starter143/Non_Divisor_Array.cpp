#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n==1){
            cout<<1<<endl;
            cout<<1<<endl;
            continue;
        }

        if(n==3){
            cout<<2<<endl;
            cout<<"2 1 1"<<endl;
            continue;
        }
            
        long long to_incre=2;
        long long i=1;
        cout<<(int)log2(n)+1<<"\n";
        
        for(long long x=1;x<=n;x++){
            if(x==to_incre){
                i++;
                to_incre=2*to_incre;
            }
            cout<<i<<" ";
        }
        cout<<endl;
	}

}



#include <bits/stdc++.h>
using namespace std;

int main() {
    //This is a comment
	int t ;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n+1,0);
	    int num = 1;
	    int i = 1;
	    while(i<=n){
	        int j = i;
	        while(j<=n&&j<i*2){
	            v[j] = num;
	            j++;
	        }
	        i = j;
	        num++;
	    }
	    cout<<num-1<<endl;
	    for(int i = 1;i<=n;i++)cout<<v[i]<<" ";
	    cout<<endl;
	}

}

