#include<bits/stdc++.h>
using namespace std;
int main( )
{
  int tc;
  cin>>tc;
  while(tc--)
  {
      int c0=0,c0al=0;
    int as;
    cin>>as;
   vector<int>a(as);
    for(int i=0;i<as;i++)
    {
     cin>>a[i];
    }
     for(int i=0;i<as;i++)
    {
      if(a[i]==0 &&a[i+1]>0 )
      {
          c0++;
      }
      else if(a[i]==0)
      {
          c0al++;
      }
    }
    if(c0al==as)
    {
        cout<<"0"<<endl;
    }
    else
    {
        if(c0==1)
        {
            cout<<"1"<<endl;
        }
        else if(c0==0)
        {
            cout<<"1"<<endl;
        }
        else cout<<"2"<<endl;
    }
  }
    return 0;
}
