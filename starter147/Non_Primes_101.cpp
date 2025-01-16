#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define pb(x) push_back(x)

vector<bool> isPrime(201, true);

void generatePrimes() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 200; ++i) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= 200; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    generatePrimes(); // Prime number sieve

    ll testCases;
    cin >> testCases;

    while (testCases--) {
        ll size;
        cin >> size;
        vector<ll> arr(size);

        for (ll i = 0; i < size; ++i) {
            cin >> arr[i];
        }

        unordered_set<ll> existingNumbers;
        bool pairFound = false;

        for (ll i = 0; i < size; ++i) {
            for (ll num : existingNumbers) {
                ll combinedSum = arr[i] + num;
                if (!isPrime[combinedSum]) {
                    cout << i + 1 << " " << (find(arr.begin(), arr.end(), num) - arr.begin() + 1) << endl;
                    pairFound = true;
                    break;
                }
            }
            if (pairFound)
                break;
            existingNumbers.insert(arr[i]);
        }

        if (!pairFound) {
            cout << "-1" << endl;
        }
    }

    return 0;
}
