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
void solve()
{
     ll n;
     cin>>n;
     string s;
     cin>>s;
     map<char,int>mp;
     int mx=0,mn=n;
     //for(auto it : s)mp[it]++, mx = max(mp[it], mx);
     for(ll i=0;i<n;i++)
     {
        mp[s[i]]++;
       // mx=max(mx,mp[s[i]]);
     }
     for(auto it:mp)
     {
        mx=max(it.second,mx);
        mn=min(it.second,mn);
     }
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(mp[s[i]]==mx && mp[s[j]]==mn && s[i]!=s[j])
            {
                // cout<<"s[i]="<<s[i]<<endl;
                // cout<<"s[j]="<<s[j]<<endl;
                s[j]=s[i];
                cout<<s<<endl;return;
            } 
        }
     }
     cout<<s<<endl;
    //  for(auto it:s)
    //  {
    //     mp[it]++;
    //     mx=max(mp[it],mx);
    //  }
    
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