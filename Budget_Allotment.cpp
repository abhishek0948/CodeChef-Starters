#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin>>t;

    while(t--){
        long long n,x;
        cin>>n>>x;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=arr[i] - x;
        }

        sort(arr.begin(),arr.end());
        int cnt=0;
        int s=0;
        int e=n - 1;

        while(s<=e){
            if(arr[s]>=0){
                break;
            }

            else if(arr[s]<0){
                int rem = 0 - arr[s];

                if(arr[e] - rem >= 0 ){
                    arr[e]-=rem;
                    cnt++;
                    s++;
                }
                else{
                    break;
                    // e--;
                }
                
            }

        }
        
        for(int i=s;i<n;i++){
            if(arr[i]>=0) cnt++;
        }

        cout<<cnt<<"\n";
    }

}