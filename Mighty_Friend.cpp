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
        ll n,k;
        cin>>n>>k;

        vll v(n);
        ll m_sum = 0;
        ll t_sum = 0;

        priority_queue<ll> m_nums;
        priority_queue<ll,vll,greater<ll>> t_nums;

        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(i&1) {
                t_sum += v[i];
                t_nums.push(v[i]);
            } else {
                m_sum += v[i];
                m_nums.push(v[i]);
            }
        }

        bool isPossible = true;

        while(k && t_sum<=m_sum) {
            ll temp1 = t_nums.top();
            ll temp2 = m_nums.top();

            if(temp1 >= temp2) {
                isPossible = false;
                break;
            }

            t_nums.pop();m_nums.pop();

            t_sum = t_sum - temp1 + temp2;
            m_sum = m_sum - temp2 + temp1;

            t_nums.push(temp2);
            m_nums.push(temp1);
            k--;
        }

        if(isPossible && t_sum > m_sum) cout<<"YES\n";
        else cout<<"NO\n";

    }
}