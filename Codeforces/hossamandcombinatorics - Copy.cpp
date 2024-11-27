#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {  
        long long int cnf=0;
       long long int cnl=0;
       long long int n;
       long long int result;
        cin>>n;
        vector<long long int>v(n,0);
      long long int lp=n-1;
        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min=v[0];
        int max=v[lp];
        for(long long int i=0;i<n;i++)
        {
            if(v[i]==min)
            {
                cnf++;
            }
            else if(v[i]==max)
            {
                cnl++;
            }
        }
        if(min==max)
        {
            result = n*(n-1);
        }
        else 
            result = 2*cnf*cnl;

        cout<<result<<endl;
    }

    return 0;
}