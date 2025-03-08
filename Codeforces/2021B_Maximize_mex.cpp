#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,x,xx;
        cin>>n>>x;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>xx;
            mp[xx]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(mp[i]==0)
            {
                cout<<i<<endl;
                break;
            }
            mp[i+x]+=mp[i]-1;
        }
    }
}