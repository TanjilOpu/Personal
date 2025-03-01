#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int ans=1,c=1;
    int s;
    cin>>s;
    if(s==1)
    {
        ans=1;
    }
    else{
        while(c<s)
        {
            c=(c+1)*2;
            ans++;
        }
    }
    cout<<ans<<endl;
  }
 
 
 
    return 0;
}