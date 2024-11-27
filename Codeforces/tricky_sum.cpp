#include<bits/stdc++.h>
using namespace std;
#define ll long long  int 
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        ll sum=0;
        cin>>n;
        for(ll i=1;i<=n;i++)
        {
           ll p=0;
           ll t=pow(2,p);
           p++;
           if(i==t)
           {
            i=(-1)*i;
            cout<<" if i = "<<i<<endl;
           }
           sum= sum+i;

        }
        cout<<"sum = "<<sum<<endl;

    }

    return 0;
}