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
        ll n, bob_x, bob_y;
        cin >> n >> bob_x >> bob_y;

        string s;
        cin >> s;

        ll ali_x = 0;
        ll ali_y = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                ali_x++;
            }
            else if (s[i] == 'L')
            {
                ali_x--;
            }
            else if (s[i] == 'U')
            {
                ali_y++;
            }
            else
            {
                ali_y--;
            }
            ll temp = abs(bob_x - ali_x) + abs(bob_y - ali_y);
            if (temp == i + 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}