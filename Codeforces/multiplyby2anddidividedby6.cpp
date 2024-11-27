#include<bits/stdc++.h>
#define ll long long int 
#define nl '\n'
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    ll ans;
    while(tc--)
    {
        ans=0;
        ll n;
        cin>>n;
        ll c=n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n=n/6;
            }
            else n=n*2;
            if(n>100000000000000000)
            {
                ans=c+1;
                break;
            }
            ans++;
            if(ans>c)
            {
                break;
            }
        }
        if(ans>=c)
        {
            ans = -1;
        }
        else ans = ans;
        cout<<ans<<nl;
    }
   return 0;
}