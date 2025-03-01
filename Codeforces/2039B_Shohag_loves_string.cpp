#include<bits/stdc++.h>
#define ll long long int
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
    string s;
    cin>>s;
    ll l=s.size();
    for(ll i=0;i+1<l;i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<s.substr(i,2)<<endl;
            return ;
        }
    }
    for(ll i=0;i+2<l;i++)
    {
        if(s[i]!=s[i+1] and s[i]!=s[i+2] and s[i+1]!=s[i+2])
        {
            cout<<s.substr(i,3)<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
     
    
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