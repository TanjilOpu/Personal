#include <bits/stdc++.h>
#include <iostream>
#include <vector>

#include <numeric> // For std::gcd
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        vector<int>pgcd(N);
        pgcd[0]= A[0];
        for (int i = 1; i<N;i++)
        {
            pgcd[i] = __gcd(pgcd[i-1], A[i]);
        }
        vector<int>sgcd (N);
        
       sgcd[N-1]= A[N-1];
         for (int i = N-2; i>=0;i--)
        {
            sgcd[i] = __gcd(sgcd[i+1], A[i]);
        }
        int psg[N];
        int cnt=0;
        for(int i=0;i<N;i++)
        {
            if(i==0)
            {
                psg[i]=sgcd[i+1];
            }
            else if(i==N-1)
            {
                psg[i]=pgcd[i-1];
            }
            else
            {
                 psg[i]=__gcd(pgcd[i-1],sgcd[i+1]);
            }



            //psg[i]=__gcd(pgcd[i-1],sgcd[i+1]);
            // cout<<"psg [ i] = "<<psg[i]<<endl;
            // cout<<"pgcd[i-1] = "<<pgcd[i-1]<<endl;
            // cout<<"sgcd[i+1] = "<<sgcd[i+1]<<endl;
            if(psg[i]>1)
            {
                cnt++;
            }

        }
        cout<<cnt<<endl;
          


        // for(auto it:pgcd)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        // for(auto it:sgcd)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}
