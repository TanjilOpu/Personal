#include<bits/stdc++.h>
#define ll long long int
//#define pb push_back
//#define ppb pop_back
//#define ld long double
//#define ui unsigned int
//#define mod 1000000007
//#define stp setpercision
//#define yes cout<<"YES"<<endl
//#define no cout<<"NO"<<endl
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool traverse[200002];
void solve()
{
     ll n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
        traverse[i]=0;
     }
     for(int i=1;i<=n;i++)
     {
        ll x;
        cin>>x;
        if(!traverse[x])
        {
            traverse[x]=1;
            cout<<x<<" ";
        }
     }
     for(int i=1;i<=n;i++)
     {
        if(!traverse[i])
        {
            cout<<i<<" ";

        }
     }
     cout<<endl;
    
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