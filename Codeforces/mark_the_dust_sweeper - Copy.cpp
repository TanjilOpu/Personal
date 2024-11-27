#include<bits/stdc++.h>
#define ll long long int 
#define nl '\n'
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll as;
        ll c=0;
        ll z=0;
        ll r=0;
        cin>>as;
        vector<ll>v(as);
        for(int i=0;i<as;i++)
        {
           cin>>v[i];
        }
        reverse(v.begin(),v.end());
        ll pos=0;
        for(ll i=as-1;i>=0;i--)
        {
            if(v[i]==0)
            {
                c++;
            }
            else break;
        }
          reverse(v.begin(),v.end());
        for(ll i=0+c;i<as-1;i++)
        {
            r=r+v[i];
            if(v[i]==0)
            {
                z++;
            }
        }
        r=r+z;
        cout<<r<<endl;
    }
    return 0;
}