#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        ll f=0;
        for(ll i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                ll c=i;
                ll up=(n-c)/2;
                for(ll i=2;i<=up;i++)
                {
                    ll a=c*i;
                    ll b = n-a-c;
                    if(__gcd(a,b) == c)
                    {
                        cout<<a<<" "<<b<<" "<<c<<endl;
                        f=1;
                        break;
                    }

                }
            }
            if(f==1)
            break;

        }
    }
}