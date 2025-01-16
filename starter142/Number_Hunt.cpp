#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll num) {
  ll i;
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

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long x;
        cin>>x;
        
        if(x==1 || x==2){
            cout<<6<<endl;
            continue;
        }

        int count=0;
        long long ans=1;
        
        while(count<2){
            if(isPrime(x)){
                ans=ans*x;
                count++;
            }
            x++;
        }
        
        cout<<ans<<endl;
    }

}
