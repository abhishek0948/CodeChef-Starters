#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        
        vll arr(n);
        vector<vector<ll>> mp(n, vector<ll>(3, 0));

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        mp[0][arr[0]-1]++;
        for(int i=1;i<n;i++){
            mp[i][0] = mp[i-1][0] + (arr[i] == 1 ? 1 : 0);
            mp[i][1] = mp[i-1][1] + (arr[i] == 2 ? 1 : 0);
            mp[i][2] = mp[i-1][2] + (arr[i] == 3 ? 1 : 0);
        }

        for (int i = 0; i < q; i++)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            ll len = r - l + 1;
            if ((len)%2==1)
            {
                cout << "NO\n";
                continue;
            }

            ll ones = 0, twos = 0, threes = 0;
            ll half = len / 2;
            if (l == 0)
            {
                ones = mp[r][0];
                twos = mp[r][1];
                threes = mp[r][2];
            }

            else
            {
                ones = mp[r][0] - mp[l - 1][0];
                twos = mp[r][1] - mp[l - 1][1];
                threes = mp[r][2] - mp[l - 1][2];
            }

            if (ones == half || twos == half || threes == half)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}