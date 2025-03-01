#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
    int x,y;
    cin>>x>>y;
    string s;
    x=x/2;
    y=y/2;
    for(int i=0;i<x;i++) s.push_back('1');
    for(int i=0;i<y;i++) s.push_back('2');
    string ans,res;
    ans=s;
    reverse(s.begin(),s.end());
    ans+=s;
    cout<<ans<<endl;

    
   }
 
 
 
    return 0;
}