#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int p,t;
    cin>>p>>t;
    vector<int>v(p);
    for(int i=0;i<p;i++)
    {
        int x;
        cin>>x;
        if(x<=t)
        {
            v[i]=1;
            t-=x;
        }
        else v[i]=0;
    }
    for(auto it:v)
    {
        cout<<it;
    }
    cout<<endl;
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