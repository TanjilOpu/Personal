#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc;
   cin>>tc;
   map<string ,string>mp;
   while(tc--)
   {
    string s;
    cin>>s;
    string name;
    cin>>name;
    mp[s]=name;      
   }
   int q;
   cin>>q;
   while(q--)
   {
       string ask;
       cin>>ask;
       cout<<mp[ask]<<endl;
   }
    return 0;
}