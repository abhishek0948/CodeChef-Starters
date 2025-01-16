#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    cin >> T;
    while(T--){
        long long n,k,h;
        cin>>n>>k>>h;

        long long ans=0;

        for(int a=1;a<=n;a++){
            if(a>=h){
                ans+=n;
                continue;
            }
            if(a*k<h) continue;
            long long maxB=min(n,((a*k - h)/(k-1)));
            ans+=maxB;
        }

        cout<<ans<<endl;
    }
    return 0;
}
