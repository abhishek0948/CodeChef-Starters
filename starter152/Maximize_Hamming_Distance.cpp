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
        ll n,m;
        cin>>n>>m;

        vector<string> sv;
        for(int i=0;i<m;i++){
            string s;
            cin>>s;
            sv.push_back(s);
        }

        vector<vector<ll>> mp(n,vector<ll> (3,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sv[j][i]=='1'){
                    mp[i][1]++;
                }
                else if(sv[j][i]=='0'){
                    mp[i][0]++;
                }
                else{
                    mp[i][2]++;
                }
            }
        }

        ll ans = 0;
        for(int i=0;i<n;i++){
            ll zeros = mp[i][0];
            ll ones = mp[i][1];
            ll ques = mp[i][2];
            
            ll mini = min(ones,zeros);
            ll maxi = max(ones,zeros);
            
            if(mini + ques <= maxi){
                mini += ques;
            }
            
            else {
                ques = ques - (maxi - mini);
                mini = maxi;
                
                if(ques%2==0) {
                    mini += ques/2;
                    maxi += ques/2;
                }
                else {
                    mini += ques/2;
                    maxi += ques/2 + 1;
                }
            }
            
            ans += mini*maxi;
        }
        
        cout<<ans<<"\n";
    }
}