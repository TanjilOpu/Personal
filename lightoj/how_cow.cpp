#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int x1,x2,y1,y2,c1,c2;
        int query;
        cin>>x1>>y1>>x2>>y2;
        cin>>query;
                cout<<"Case "<<i<<":"<<endl;
        while(query--)
        {
            cin>>c1>>c2;
            if(c1>x1 && c1<x2 && c2>y1 && c2<y2)
            {
                cout<<"Yes\n";
            }
            else cout<<"No\n";

        }
    }
    return 0;
}