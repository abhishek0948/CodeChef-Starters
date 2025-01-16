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
        ll n;
        cin >> n;

        vll v(n);

        ll neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                neg++;
        }

        if (neg == n)
        {
            cout << "0\n";
            continue;
        }

        ll i = 0;
        ll j = n - 1;

        for (i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                break;
            }
        }

        for (j = n - 1; j>i; j--)
        {
            if (v[j] > 0)
            {
                break;
            }
        }

        int cnt = 0;
        for (int p = i; p <= j; p++)
        {
            if (v[p] < 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
}