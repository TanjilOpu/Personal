#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,x1,y1,x2,y2,x3,y3,x4,y4,x,s;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;

x=abs(x1-x2);
if(x>0)
{
     s=x*x;
}
else 
{
    x=abs(x2-x3);
     s=x*x;
}

cout<<s<<endl;
    }


    return 0;
}