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
        // An array an be made winning if it has 11 or 101
        ll n;
        cin >> n;
        vll v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // All one sized subarrays of 1 will be winning
        ll ans = count(v.begin(), v.end(), 1);

        // To avoid overcounting of subarrays and set lower bound for checking
        ll left = 0;
        for (int i = 0; i < n; i++)
        {
            // 11 case
            if (i + 1 < n && v[i] + v[i + 1] == 2)
            {
                ans += ((i - left + 1) * (n - (i + 1)));
                left = i + 1;
            }
            // 101 case
            else if (i + 2 < n && v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1)
            {
                ans += ((i - left + 1) * (n - (i + 2)));
                left = i + 1;
            }
        }

        cout << ans << "\n";
    }
}