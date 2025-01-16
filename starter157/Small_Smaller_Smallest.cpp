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
        ll n;
        cin>>n;

        string s;
        cin>>s;

        ll ones = 0;
        ll zeros = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1') ones++;
            else zeros++;
        }

        if(zeros == n) {
            cout<<n<<"\n";
            continue;
        }

        if(ones == n){
            if(n%2) {
                cout<<1<<"\n";
            }
            else {
                cout<<"0\n";
            }
            continue;
        }

        if(ones % 2) {
            cout<<"1\n";
        }
        
        else {
            cout<<"0\n";
        }
    }
}