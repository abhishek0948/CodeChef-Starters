#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string A,B;
        cin>>A>>B;

        int ans=m;
        for(int i=0;i<=n-m;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(A[i+j]!=B[j]){
                    cnt++;
                }   
            }
            ans=min(ans,cnt);
        }

        cout<<ans<<endl;
    }
}