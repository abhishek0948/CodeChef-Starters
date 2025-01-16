#include <bits/stdc++.h>
using namespace std;

//This is only for understanding and will not work due to TLE
// void solve(long long n,long long m){
//     long long ans=0;
//     if(n==2 || m==2){
//         for(long long i=1;i<=n*m;i++){
//             if(i%4!=0) ans+=2;
//         }
//         cout<<ans<<endl;;
//     }

//     else{
//         for(long long i=1;i<=n*m;i++){
//             if(i%4==1 || i%4==3) ans+=2;
//             else if(i%4==2){
//                 if(i==2 || i==(n*m - 2)){
//                     ans+=2;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
// }

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin>>n>>m;
        
        if (n == 2 || m == 2)
        {
            cout << (3 * n * m) / 2 << endl;
        }

        else
        {
            cout << (n * m ) + 4 << endl;
        }
    }
}