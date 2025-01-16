#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        int ans=0;
        
        // for(int i=4;i<=x;i=i+2){
        //     if(__builtin_popcount(i)==1) ans=0;
        //     else ans=ans+4;
        // }

        bitset<32> b(x);
        int num;
        for(int i=31;i>=0;i--){
            if(b[i]==1){
                num=(1<<i);
                break;
            }
        }
        
        int temp= x - num;
        cout<<temp*2<<endl;
    }
}