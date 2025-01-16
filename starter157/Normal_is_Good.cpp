#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] -= 2;
    }

    map<int, int> cnt;
    int sum = 0;
    long long ans = 0;

    cnt[0] = 1;

    // subarrays with equal 1s and 3s
    for (int i = 0; i < n; i++) {
      sum += a[i];
      ans += cnt[sum];
      cnt[sum]++;
    }
    
    // excluding subarrays with equal 1s and 3s but no 2s
    // i.e For counting subarrays with equal 1s and 3s and atleast one 2
    // We use (count[1]==count[3]) - (count[1]==count[3] and count[2]==0)
    
    cnt.clear();
    sum = 0;
    cnt[0] = 1;
    // For (count[1]==count[3] and count[2]==0)
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        sum = 0;
        cnt.clear();
        cnt[0] = 1;
      } else {
        sum += a[i];
        ans -= cnt[sum];
        cnt[sum]++;
      }
    }

    // subarrays with only 1s or 3s
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) continue;
      int j = i;
      while (j < n && a[i] == a[j]) j++;
      int len = j - i;
      ans += 1LL * len * (len + 1) / 2;
      i = j - 1;
    }

    cout << ans << "\n";
  }

  return 0;
}