#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int log=0;
    int sum=0;
    string s;

    while(tc--)
    {
      cin>>s;
      if(s=="login")
      {
        log=1;
      }
      else if(s=="logout")
      {
        log=0;
      }
      if(s=="private" && log==0)
      {
        sum++;
      }

    }
    cout<<sum<<endl;
}