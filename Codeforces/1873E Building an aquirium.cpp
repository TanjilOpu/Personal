#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>v;
ll n,k,maxa=0;
bool isOk(ll mid)
{
  ll sum = 0;
  for(ll i=0;i<n;i++)
  {
      if(mid>v[i])
      {
        sum+=mid-v[i];
        if(sum>k)
        {
          return false;
        }
      }
  }
  return sum<=k;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
     cin>>n>>k;
     v.resize(n);
     for(auto &it:v)
     {
       cin>>it;
       maxa = max(maxa,it);
     }
     
     ll l=1,r=maxa+k;
     ll ans = 0;
     while(l<=r)
     {
       ll mid = l+(r-l)/2;
       if(isOk(mid))
       {
         ans = mid;
           l =mid+1;
       }
       else r = mid - 1;
     }
     cout<<ans<<endl;
  }
}
