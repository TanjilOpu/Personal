#include<bits/stdc++.h>
#define ll long long int
#define vc vector
#define srt(v) sort(v.begin(),v.end())
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
     ll n,k;
     cin>>n>>k;
     map<ll,ll>mp;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        mp[x]++;
     }
     vc<ll>v;
     for(auto it:mp)
     {
        v.push_back(it.second);
     }
     srt(v);
   ll sz=v.size();
    ll ans=sz;
    for(ll i=0;i<sz;i++)
    {
        k-=v[i];
        if(k<0)
        {
            break;
        }
        ans--;
    }
    ll t=1;
    ll res=max(ans,t);
    cout<<res<<endl;
    
   
}
int main()
{
    faster();
   ll tc;
   cin>>tc; 
   while(tc--)
     {
       solve();
           
     }
}