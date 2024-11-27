#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l=s.size();
    for(int i=0; i<l; i++)
    {
        s[i]=tolower(s[i]);
    }
    char c;
  for(int i=l-1;i>=0;i--)
  {
      if(s[i]==' ' || s[i]=='?')
      {
          c='c';
      }
      else
      {
          c=s[i];
          break;
      }
  }
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='y')
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
