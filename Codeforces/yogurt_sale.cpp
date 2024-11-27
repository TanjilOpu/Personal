#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll tc;
    cin >>tc;
    while(tc--)
    {
      ll n,a,b;
        cin>>n>>a>>b;
        if(2*a<b)
        {
            cout<<n*a<<endl;
        }
        else
        {
          ll sum=0;
            while(n>1)
            {
                sum=sum+b;
                n=n-2;
            }
            if(n==1)
            {
                sum=sum+a;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
