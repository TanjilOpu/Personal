#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b,x,y;
    cin>>n>>a>>b;
    x=y=0;
    string s;
    cin>>s;
    for(int i=0;i<=100;i++)
    {
        for(char it:s)
        {
            if(x==a && y==b)
            {
                cout<<"YES"<<endl;
                return;
            }
            if(it=='N') y++;
            if(it=='S') y--;
            if(it=='E') x++;
            if(it=='W') x--;
        }
    }
    cout<<"NO"<<endl;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}