#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            int t=x;
            x=y;
            y=t;
        }
        cout<<x<< " "<<y<<endl;

    }
    return 0;
}
