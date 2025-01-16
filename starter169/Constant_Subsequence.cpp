#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>

// Approach 
// 1] Use BS to search for a possible max_sum subarray

bool valid(ll mid,deque<ll> pos,deque<ll> negs) {
    if(pos.empty()) return true;

    ll s = pos.front();
    pos.pop_front();

    // Note - When we use size() ,it will fail 
    while(!pos.empty()) {
        if(s > mid) return false;
        if(s + pos.front() > mid) {
            if(negs.empty()) return false;
            s += negs.front();
            negs.pop_front();
        } else {
            s = max(s + pos.front(),1LL * pos.front());
            pos.pop_front();
        }
    }

    return s <= mid;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll A(n);
        deque<ll> pos,negs;

        for(int i=0;i<n;i++) {
            cin>>A[i];
            if(A[i]>0) pos.push_back(A[i]);
            else negs.push_back(A[i]);
        }

        ll l = max(0LL,*max_element(A.begin(),A.end()));
        ll r = accumulate(pos.begin(),pos.end(),0LL);
        ll mid,ans=r;

        while(l<=r) {
            mid = l + (r-l)/2;
            if(valid(mid,pos,negs)) {
                r = mid - 1;
                ans = min(ans,mid);
            } else {
                l = mid + 1;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
