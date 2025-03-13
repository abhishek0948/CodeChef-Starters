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

        string a,b;
        cin>>a>>b;

        string s;
        for(int i=0;i<n;i++) {
            if(a[i]!=b[i]) {
                s.push_back('1');
            } else {
                s.push_back('0');
            }
        }

        vector<pair<ll,ll>> intervals;

        for(int i=0;i<n;i++) {
            if(s[i]=='1') {
                int start = i;
                while(start<n && s[start]=='1') start++;
                intervals.push_back({i,start-1});
                i = start;
            }
        }
        
        ll allowed = ((n%2==0) ? n/2 : n/2+1);

        if(intervals.size()==0) {
            cout<<"0\n";
            continue;
        } else if(intervals.size()<=allowed) {
            cout<<intervals.size()<<"\n";
            for(auto &it:intervals) {
                cout<<"1"<<" "<<it.first+1<<" "<<it.second+1<<"\n";
            }
        }
    }
}