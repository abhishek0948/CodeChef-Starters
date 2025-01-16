#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll m,p;
        cin>>m>>p;

        if(m==299){
            cout<<"0\n";
            continue;
        }

        ll rem_mins = 300 - m - 1;

        ll cnt = 0;
        for(int i=1;i<=rem_mins;i++){
            ll f_p = i*20 + p;
            if(f_p + (m+i) <= 1000){
                cnt=i;
            }
            else{
                break;
            }
        }
        
        cout<<cnt<<"\n";
    }
}