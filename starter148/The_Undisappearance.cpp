#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

int remove(vll &v,int num){
    int n=v.size();
    int bad = num - 1;
    if(bad==0) bad = 3;

    int l=-1;int r=-1;
    for(int i=0;i<n;i++){
        if(v[i]==num){
            l=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(v[i]==num){
            r=i;
            break;
        }
    }

    for(int i=l;i<=r;i++){
        if(v[i]==bad){
            return 0*1LL;
        }
    }

    int newl=l;int newr=r;
    while(newl>0 && v[newl]!=bad){
        newl--;
    }

    while(newr<n && v[newr]!=bad){
        newr++;
    }

    int ans = (l - newl + 1) * (newr - r + 1);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vll v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        ll total = n * (n + 1) / 2;

        ll ans = total - remove(v,1) - remove(v,2) - remove(v,3);
        
        cout<< ans + 1 <<"\n";
    }
}