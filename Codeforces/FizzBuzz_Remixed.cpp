#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    int d = n/15;
    d++;
    int ans=d*3;
    int r = n%15;
    if(r<2)
    {
        int m=2-r;
        ans-=m;
    }
    cout<<ans<<endl;
   
  
}
int main()
{
     ll tc;
     cin>>tc;
     while(tc--)
     {
        solve();
     }
}