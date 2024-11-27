#include<bits/stdc++.h>
using namespace  std;
#define ll long long int 
void solve(ll n,ll x,ll y)
{
    ll p1,p2;
       p1=1;
        p2=2;
    ll sa=(n-1)/x;
    while(sa--)
    {
     
        for(int i=0;i<x;i++)
        {
            cout<<p1<<" ";
            p2++;
        }
        
        p1=p2;
    }
    cout<<endl;

  
}
int main()
{
    ll tc;
    cin>>tc;
    while (tc--)
    {
            ll n,x,y;
            cin>>n>>x>>y;
            if((x==0 && y==0)|| (x>0 && y>0))
            {
                 cout<<-1<<endl;
                 continue;
            }
            if(x==0 && y>0) swap(x,y);
            //cout<<"x ="<<x;
            ll g=n-1;
            if(g%x==0)
            {
                solve(n,x,y);
            }
            else cout<<-1<<endl;   
    }




    return 0;
}