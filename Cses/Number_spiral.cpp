#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
      ll tc,result,w,e,x,y;
      cin>>tc;
      while(tc--)
      { 
        cin>>x>>y;
        w = max(x,y);
        e = min(x,y);
        if(x%2==1 && y%2==1)
        {
            result = w*w-e+1;
        }
       else  if(x%2==1 && y%2==0)
        {
            result = (w-1)*(w-1)+e;
        }
        else if(x%2==0 && y%2==1)
        {
            result = w*w-e+1;
        }
        else if(x==y)
        {
            result = w*w-1*(x-1);
        }
        else if(x%2==0 && y%2 == 0)

        {
            result = (w-1)*(w-1)+e;
        }
        cout<<result<<endl;
      }
}