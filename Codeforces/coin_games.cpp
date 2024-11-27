#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int as;
        cin>>as;
      string s;
      cin>>s;
      int cU=0;
      for(int i=0;i<as;i++)
      {
          if(s[i]=='U')
          {
              cU++;
          }
      }
      if(cU%2==1)
      {
          cout<<"Yes\n";
      }
      else cout<<"No\n";
    }
    return 0;
}
