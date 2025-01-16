#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

// Bin Exponential
ll MOD = 1e9 + 7;

ll bin_exp ( ll x,ll n) {
    ll ans = 1;
    while(n > 0) {
        if(n&1) {
            ans = (ans * x) % MOD;
            n--;
        }

        x = (x * x) % MOD;
        n = n >> 1;
    }
    return ans;
}

// Multiplicative Inverse Modulo
long long inv_mod(long long a, long long m) {
    long long m0 = m, x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        long long q = a / m;
        long long t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

// Prime Check of a number
bool isPrime(long long num)
{
	long long i;
	if (num == 1)
		return false;
	if (num <= 3)
		return true;
	if (num % 2 == 0 || num % 3 == 0)
		return false;
	if (num < 25)
		return true;
	for (i = 5; i * i <= num; i += 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return false;
	return true;
}

// Prefix sum for 2D array
void prefix_2D() {
	ll sz = 1e3 + 10;
	vector<vector<ll>> pre(sz,vector<ll>(sz,0));
	vector<vll> arr(10,vll (10,0));

	for(ll i=1;i<=10;i++) {
		for(ll j=1;j<=10;j++) {
			cin>>arr[i][j];
			pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1]; 
		}
	}

	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1];
}


	

