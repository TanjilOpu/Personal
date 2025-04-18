#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='1' or s[n-1]=='1')
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=1;i<n-1;i++)
    {
        if(s[i]=='1' and s[i+1]=='1')
        {
            cout<<"YES"<<endl;
            return;
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