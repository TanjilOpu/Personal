#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        double x,y,d,ts,t1s;
        cin>>x>>y;
        d=ceil(y/2);
        ts=15*d;
        t1s=ts-4*y;
//        int m=min(t1s,x);
//        x=x-m;
//        double c=ceil(x/15);

         cout<<d+c<<endl;


    }

    return 0;
}
