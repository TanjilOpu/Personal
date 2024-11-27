#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl '\n'
int main()
{
   ll tc;
   cin>>tc;
   while(tc--)
   {
    ll ans = 0,ans2=0;
    ll ti;
    ll mh,mp;
    ll m;
    cin>>m;
    vector<ll>h(m,0);
    vector<ll>p(m,0);
    for(ll i=0;i<m;i++)
    {
        cin>>h[i];  
    }
      for(ll i=0;i<m;i++)
    {
       ans=ans+h[i];
    }
    
    for(ll j=0;j<m;j++)
    {
        cin>>p[j]; 
    }
    sort(p.begin(),p.end());
  
      for(ll j=0;j<m-1;j++)
    {
     ans2=ans2+p[j];       
    }
   ll r=ans+ans2;
    cout<<r<<endl;
    
    
    }
    

    return 0;
}