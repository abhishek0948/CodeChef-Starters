#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

bool solve()
{
    ll r, g, b;
    cin >> r >> g >> b;

    if((r+g)>=b && (g+b)>=r && (r+b)>=g) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        bool ans = solve();
        if (ans)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
}