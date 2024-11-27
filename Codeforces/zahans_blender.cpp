#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,x,y;
        cin>>n;
        cin>>x>>y;
        ll t,r;
        if(x>y)
        {
            t=y;
        }
        else t=x;
        if(n%t==0)
        {
            r=n/t;
        }
        else r=(n/t)+1;

        cout<<r<<endl;
    }
    return 0;
}
