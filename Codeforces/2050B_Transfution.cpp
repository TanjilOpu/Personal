#include<bits/stdc++.h>
#define ll long long int
#define vc vector
#define srt(v) sort(v.begin(),v.end())
#define pb push_back
// #define ppb pop_back
// #define ld long double
// #define ui unsigned int
// #define mod 1000000007
// #define stp setpercision
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vc<ll>v(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum % n==0)
    {
        ll ans = sum/n;
        for(ll i=0;i<n-2;i++)
        {
            if(v[i]>ans)
            {
                ll d = v[i]-ans;
                v[i]=ans;
                v[i+2] = v[i+2]+d;
            }
            else if(v[i]<ans)
            {
                ll d = ans-v[i];
                v[i]=ans;
                v[i+2] = v[i+2]-d;
            }
        }
        if(v[n-1]==ans && v[n-2]==ans)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;

     
    
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