#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
         int a,b,c;
     cin>>a>>b>>c;
     int l=5;
     while(l--)
     {
         int x=min(a,min(b,c));
         if(x==a)
         {
             a++;
         }
         else if(x==b)
         {
             b++;
         }
         else c++;
     }
     int r=a*b*c;
     cout<<r<<endl;
    }


    return 0;
}
