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

        vll pos;
        vll neg;

        for (int i = 0; i < n; i++)
        {   
            ll x;
            cin>>x;

            if (x < 0)
                neg.push_back(x);
            else
                pos.push_back(x);
        }

        sort(neg.begin(), neg.end());
        sort(pos.begin(),pos.end());

        ll sum=0;

        for(int i=0;i<pos.size();i++)
            sum+=pos[i];

        ll sz = neg.size();
        if (sz % 2 == 0)
        {
            for (auto it : neg)
            {   
                ll temp = abs(it);
                sum += temp;
            }
        }
        else
        {
            for (int i = 0; i < sz - 1; i++)
            {   
                ll temp = abs(neg[i]);
                sum += (temp);
            }

            ll temp = abs(neg[sz-1]);
            if(pos.size()>0 && temp > pos[0]){
                sum+=temp;
                sum-=2*pos[0];
            }

            else{
                sum-=temp;
            }
        }
        cout << sum << "\n";
    }
}

// -------------------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define int long long

// int32_t main() {
// 	// your code goes here
// 	ios::sync_with_stdio(0);
//     cin.tie(0);

//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<int> numbers(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> numbers[i];
//         }

//         int cnt = 0;
//         for (int i = 0; i < n; ++i) {
//             if (numbers[i] < 0) {
//                 cnt++;
//                 numbers[i] = abs(numbers[i]);
//             }
//         }

//         int ans = 0;
//         for (int i = 0; i < n; ++i) {
//             ans += numbers[i];
//         }

//         if (cnt == 0 || cnt % 2 == 0) {
//             cout << ans << endl;
//         } else {
//             sort(numbers.begin(), numbers.end());
//             ans -= 2 * numbers[0];
//             cout << ans << endl;
//         }
//     }

//     return 0;
// }