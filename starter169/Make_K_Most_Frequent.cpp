#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Approach -
// 1]If already max_freq then 0 ops needed
// 2]check from left side if k becames max_freq ele at any time ,if it can then delete the rem right side
// 3]similarly for right side
// 4]if not possible then we have to delete both left and right side taking 2 ops

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vll v(n);
        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] = x;
            mp[x]++;
        }

        bool possible = true;
        ll max_freq = INT_MIN;

        for (auto &it : mp)
        {
            max_freq = max(max_freq, it.second);
        }

        if (mp[k] == max_freq)
        {
            cout << "0\n";
        } else {
            mp.clear();
            ll freq_max = INT_MIN;
            bool found = false;

            for(int i=0;i<n;i++) {
                mp[v[i]]++;
                freq_max=max(freq_max,mp[v[i]]);
                if(mp[k]==freq_max) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                mp.clear();
                freq_max = INT_MIN;
                for(int i=n-1;i>=0;i--) {
                    mp[v[i]]++;
                    freq_max=max(freq_max,mp[v[i]]);
                    if(mp[k]==freq_max) {
                        found=true;
                        break;
                    }
                }


                if(found) cout<<"1\n";
                else cout<<"2\n";
            } else {
                cout<<"1\n";
            }
        }
    }
}
