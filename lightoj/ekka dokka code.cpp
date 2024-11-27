#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
      int  cs=1;
    while(tc--)
    {

        ll ev=0;
        ll od=0;

        ll n;
        cin>>n;
        ll l=sqrt(n);
        ll mnev=n;
        for(ll i=2; i<=l; i++)
        {
            if(n%i==0)
            {
                ll ans=n/i;
                if(i%2==0 && ans%2==1)
                {
                    ev=i;
                    od=ans;
                    if(mnev>ev)
                    {

                        mnev=ev;
                    }
                }
                else if(i%2==1 && ans%2==0)
                {
                    ev=ans;
                    od  = i;
                    if(mnev>ev)
                    {

                        mnev=ev;
                    }
                }

            }
        }
        if(ev==0 && od==0)
            printf("Case %d: Impossible\n",cs);
        else
        {
            printf("Case %d: %d %d\n",cs,od,ev);
        }
        cs++;

    }
    return 0;
}
