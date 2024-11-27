#include<bits/stdc++.h>
#define ll long long  int 
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c)
        {
            cout<<"YES\n";
        }
        else 
        {
            ll d1=abs(a-b);
            ll d2=abs(b-c);
            if(d1>d2)
            {
                ll t=d1;
                d1=d2;
                d2=t;
            }
            if(d2%d1==0)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}