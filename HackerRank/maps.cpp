#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int tc;
  cin>>tc;
      map<string ,int>mp;
  while(tc--)
  { int type;
  cin>>type;
   string s;
    cin>>s;
  if(type == 1)
  {
    int marks ;
    cin>>marks;
    mp[s] = mp[s]+marks;

  }
  else if(type == 2)
  {
    
    mp.erase(s);
  }
  else{
   
         cout<<mp[s]<<endl;
  }
  }
    return 0;
}