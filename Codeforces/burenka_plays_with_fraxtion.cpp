#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl '\n'
int main()
{
    ll tc,a,b,c,d;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c>>d;
        ll x=a*d;
        ll y=b*c;
       if(x == y)
       {
        cout<<"0"<<nl;

       }
       else if(x == 0 ||  y==0)
       {
        cout<<"1"<<nl;
       }
       else if(x%y==0 || y%x==0)
       {
        cout<<"1"<<nl;
       }
       else cout<<"2"<<nl;

        
    }
    return 0;
}