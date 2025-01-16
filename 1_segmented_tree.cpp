#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)


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

// Basic segment tree
// class SgTree
// {
// 	vector<int> seg;

// public:
// 	SgTree(int n)
// 	{
// 		seg.resize(4 * n, 0);
// 	}

// 	void build(int ind, int low, int high, int arr[])
// 	{
// 		if (low == high)
// 		{
// 			seg[ind] = arr[low];
// 			return;
// 		}

// 		int mid = (low + high) / 2;
// 		build(2 * ind + 1, low, mid, arr);
// 		build(2 * ind + 2, mid + 1, high, arr);
// 		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
// 	}

// 	void update(int ind, int low, int high, int i, int val)
// 	{
// 		if (low == high)
// 		{
// 			seg[ind] = val;
// 			return;
// 		}

// 		int mid = (low + high) / 2;
// 		if (i <= mid)
// 			update(2 * ind + 1, low, mid, i, val);
// 		else
// 			update(2 * ind + 2, mid + 1, high, i, val);

// 		seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
// 	}

// 	int query(int ind, int low, int high, int l, int r)
// 	{
// 		// No overlap
// 		//[] l r low high] or [low high l r]
// 		if (r < low || l > high)
// 			return INT_MAX;

// 		// Complete overlap
// 		//[l low high r]
// 		if (low >= l && high <= r)
// 		{
// 			return seg[ind];
// 		}

// 		// Partial overlap
// 		int mid = (low + high) >> 1;
// 		int left = query(2 * ind + 1, low, mid, l, r);
// 		int right = query(2 * ind + 2, mid + 1, high, l, r);
// 		return min(left, right);
// 	}
// };


// Lazy Propogation
class ST{
	vll st,lazy;
public:
	ST(ll n){
		st.resize(4*n);
		lazy.resize(4*n);
	}

	void build(int ind,int low,int high,vll &arr){
		if(low==high){
			st[ind]=arr[low];
			lazy[ind]=0;
			return;
		}

		ll mid = (low + high)/2;
		build(2*ind+1,low,mid,arr);
		build(2*ind+2,mid+1,high,arr);
		st[ind] = st[2*ind+1] + st[2*ind+2];
		lazy[ind] = 0;
	}

	void update(int ind,int low,int high,int l,int r,int val){
		//Update previous remaining updates and propogate downwards
		if(lazy[ind]!=0){
			st[ind] += (high - low + 1) * lazy[ind];
			//Once updated propogate that update to down children
			if(low!=high){
				lazy[2*ind+1] += lazy[ind];
				lazy[2*ind+2] +=lazy[ind];
			}

			lazy[ind]=0;
		}

		// no overlap 
		// we dont do anything and we return 
		if(high<l or low>r){
			return ;
		}

		// complete overlap
		if(low>=l and high<=r){
			st[ind] += (high - low + 1) * val;
			// if not a leaf node
			if(low!=high){
				lazy[2*ind+1] += val;
				lazy[2*ind+2] += val;
			}
			return ;
		}

		// Partial overlap
		ll mid = (low + high)/2;
		update(2*ind+1,low,mid,l,r,val);
		update(2*ind+2,mid+1,high,l,r,val);
		st[ind] = st[2*ind+1] + st[2*ind+2];
	}

	ll query(int ind,int low,int high,int l,int r){
		//Update previous remaining updates and propogate downwards
		if(lazy[ind]!=0){
			st[ind] += (high - low + 1) * lazy[ind];
			//Once updated propogate that update to down children
			if(low!=high){
				lazy[2*ind+1] += lazy[ind];
				lazy[2*ind+2] +=lazy[ind];
			}

			lazy[ind]=0;
		}

		// no overlap
		if(high<l or low>r){
			return 0;
		}

		// Complete overlap
		if(low>=l and high<=r){
			return st[ind];
		}

		// Parital overlap
		ll mid = (low + high)/2;
		ll left = query(2*ind+1,low,mid,l,r);
		ll right = query(2*ind+2,mid+1,high,l,r);

		return left + right;
	}
};	


void solve()
{
	ll n;
	cin >> n;
	vll arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	ST seg1(n);
	seg1.build(0, 0, n - 1, arr);

	ll q;
	cin >> q;
	while (q--)
	{	
		ll type;
		cin >> type;

		if(type==1){
			ll l,r;
			cin>>l>>r;
			cout<<seg1.query(0,0,n - 1,l,r)<<"\n";
		}
		
		else {
			ll l,r,val;
			cin>>l>>r>>val;
			seg1.update(0,0,n-1,l,r,val);
		}
		
	}
}

int main(){
	solve();
}












