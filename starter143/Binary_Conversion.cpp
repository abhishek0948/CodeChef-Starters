#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string S, T;
        cin >> S >> T;

        long long diff = 0;
        long long one_1 = 0;
        long long one_2 = 0;

        for (long long i = 0; i < n; i++)
        {
            if (S[i] == '1')
                one_1++;
            if (T[i] == '1')
                one_2++;
            if (S[i] != T[i])
                diff++;
        }

        if (one_1 != one_2 || (diff / 2) > k)
        {
            cout << "NO" << endl;
            continue;
        }

        if (n == 2)
        {   
            if(one_1==0){
                cout<<"YES"<<endl;
            }
            else if((one_1==1)){
                if(S!=T && k%2!=1) cout<<"NO"<<endl;
                else if(S==T && k%2!=0) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

        else
        {
            if((diff/2)<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
