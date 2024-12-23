#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll oned=a+b+c;
        ll total = (n/oned)*3;
        n=n%oned;
        if(n>0)
        {
            total++;
            n-=a;
        }
        if(n>0)
        {
            total++;
            n-=b;
        }
        if(n>0)
        {
            total++;
        }
        cout<<total<<endl;
    }

 
 
 
    return 0;
}