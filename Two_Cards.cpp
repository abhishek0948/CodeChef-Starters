// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define vll vector<long long>
// #define pb(x) push_back(x)

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;

//         vll a(n);
//         vll b(n);

//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }

//         vll temp = a;
//         sort(temp.begin(),temp.end());

//         ll a_max = temp[n-1];
//         ll a_max2 = temp[n-2];

//         ll a1_idx = 0;
//         ll a2_idx = 0;

//         for(int i=0;i<n;i++) {
//             if(a[i] == a_max) a1_idx = i;
//             if(a[i] == a_max2) a2_idx = i;
//         }
        
//         temp = b;
//         sort(temp.begin(),temp.end());

//         ll b_max = temp[n-1];
//         ll b2 = b[a1_idx];
//         ll b3 = b[a2_idx];
//         ll b_max_idx = 0;

//         if(a_max > b3) cout<<"Yes\n";
//         else if(b_max > a_max && b_max > b2) cout<<"Yes\n";
//         else if()
//         else cout<<"No\n";
//         // cout<<"A max:"<<a_max<<" "<<"A max2:"<<a_max2<<"\n";
//         // cout<<"B max: "<<b_max<<" "<<"B max to A max: "<<b2<<" "<<"B max to A max2: "<<b3<<"\n";
//         // cout<<"\n";
//     }
// }