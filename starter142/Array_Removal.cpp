#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long temp=0;

        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            temp=temp|x;
        }
        
        if((temp&1)!=1){
            cout<<n<<endl;
            continue;
        }
        
        while((temp&1)!=0){
            temp=temp>>1;
        }

        long long ans=0;
        while(temp!=0){
            ans++;
            temp=temp>>1;
        }

        cout<<ans<<endl;
    }

}
