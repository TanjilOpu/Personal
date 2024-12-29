#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    int h,l,w;
    cin>>h>>l>>w;
      int s1 = 2*l*w;
      int s2 = 2*l*h;
      int s3 = 2*h*w;
      int ta=s1+s2+s3;
      int res = 1000/ta;
      cout<<res<<endl;
  }
 
 
 
    return 0;
}