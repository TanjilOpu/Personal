#include<bits/stdc++.h>
#define ll long long int
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
     ll a,b;
     cin>>a>>b;
     if(a+1>=b && (a+1-b)%9==0) yes;
     else no;
     
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