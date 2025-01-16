#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define vl vector <ll>
#define vll vector <vector <ll>>
#define pll pair<ll,ll>
#define mll  map<long long,long long> 
#define pb push_back
#define full(x)  x.begin(),x.end()
#define w(t) while(t--)
#define in(n)  ll n; \
               cin>>n;
#define dfor(i,a,b) for(ll i=a;i<b;i++)
#define inf = 1e18
#define inar(a, n)             \
    ll n;                      \
    cin >> n;                  \
    long long a[n];            \
    for (ll i = 0; i < n; i++) \
    cin >> a[i]
#define setbit(x) __builtin_popcountll(x)
const ll mod = 1e9+7;

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string s2 = s;
    reverse(s2.begin(),s2.end());
    ll a = 0,b=0,c=0,d =0;
    for(auto y:s2){
        if(y=='k'){
            a++;
        }
        if(y=='c' && a){
         a--;
         b++;
        }
        if(y=='a' && b){
            b--;
            c++;
        }
        if(y=='b' && c){
            d++;
            c--;
        }
    }

    ll ans = d*3;
    ll cnt = d;
    while(cnt){
        if(c){
            ans+=c*3;
            c=0;
        }
        else if(b && cnt>=2){
            ll temp = min(b*2,cnt);
            cnt -=(temp/2);
            ans+=(temp/2)*3;
            b-=temp/2;
        }
        else if(a && cnt>=3){
            ll temp = min(a*3,cnt);
            cnt-=((temp/3)*2);
            ans+=(temp/3)*3;
            a-=temp/3;
        }
        else{
            ans+= (cnt/4)*3;
            cnt -= (cnt/4)*3;
            if(cnt<4)
                break;
        }
    }
    
    ll a2 = 0,b2=0,c2=0,d2 =0,e2=0;
    for(auto y:s){
        if(y=='f'){
            a2++;
        }
        if(y=='r' && a2){
         a2--;
         b2++;
        }
        if(y=='o' && b2){
            b2--;
            c2++;
        }
        if(y=='n' && c2){
            d2++;
            c2--;
        }
        if(y=='t' && d2){
            d2--;
            e2++;
        }
    }
    ans+=e2*4;
    cnt = e2;
    while(cnt){
        if(d2){
            ans+=d2*4;
            d2=0;
        }
        else if(c2 && cnt>=2){
            ll temp = min(c2*2,cnt);
            cnt -=(temp/2);
            c2 -= (temp/2);
            ans+=(temp/2)*4;
        }
        else if(b2 && cnt>=3 ){
            ll temp = min(b2*3,cnt);
            cnt-=(temp/3)*2;
            ans+=(temp/3)*4;
            b2-= temp/3;
        }
        else if(a2 && cnt>=4){
            ll temp = min(a2*4,cnt);
            cnt-=(temp/4)*3;
            ans+=(temp/4)*4;
            a2-=temp/4;
        }
        else{
            ans+=(cnt/5)*4;
            cnt -= (cnt/5)*4;
            if(cnt<5)
                break;
        }
    }

    cout<<s.size()-ans<<endl;

}

return 0;
}

// b a c k  starting
//f r o n t back