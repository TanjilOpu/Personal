#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    k--;
    int annd=0,orr=0,xr=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
             int ca = i&j;
             if(ca>annd && ca<=k)
             {
                annd=ca;
             }
           
             int cr = i|j;
             if(cr>orr && cr<=k)
             {
                orr=cr;
             }
             int cxr=i^j;
              if(cxr>xr && cxr <=k)
              {
                xr=cxr;
              }
         }
    }
    cout<<annd<<endl;
    cout<<orr<<endl;
    cout<<xr<<endl;
}