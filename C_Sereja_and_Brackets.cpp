#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

class SgTree
{   
public:
	vll seg;

	SgTree(ll n)
	{
		seg.resize(4*n, 0);
	}

	void build(int ind, int low, int high, vll &arr,int orr)
	{
		if (low == high)
		{
			seg[ind] = arr[low];
			return;
		}

		int mid = (low + high) / 2;
		build(2 * ind + 1, low, mid, arr,!orr);
		build(2 * ind + 2, mid + 1, high, arr, !orr);

        if(orr) 
		    seg[ind] = (seg[2 * ind + 1] | seg[2 * ind + 2]);
        else 
		    seg[ind] = (seg[2 * ind + 1] ^ seg[2 * ind + 2]);

	}

	void update(int ind, int low, int high, int i, int val,int orr)
	{
		if (low == high)
		{
			seg[ind] = val;
			return;
		}

		int mid = (low + high) / 2;
		if (i <= mid)
			update(2 * ind + 1, low, mid, i, val,!orr);
		else
			update(2 * ind + 2, mid + 1, high, i, val,!orr);

        if(orr)
		    seg[ind] = (seg[2 * ind + 1] | seg[2 * ind + 2]);
        else
		    seg[ind] = (seg[2 * ind + 1] ^ seg[2 * ind + 2]);

	}

	int query(int ind, int low, int high, int l, int r)
	{
		if (r < low || l > high)
			return INT_MAX;

		if (low >= l && high <= r)
		{
			return seg[ind];
		}

		int mid = (low + high) >> 1;
		int left = query(2 * ind + 1, low, mid, l, r);
		int right = query(2 * ind + 2, mid + 1, high, l, r);
		return min(left, right);
	}
};

void solve(){
    string s;
    cin>>s;

    ll sz=s.length();
    SgTree seg1(sz);

    ll m;
    cin>>m;

    while(m--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}