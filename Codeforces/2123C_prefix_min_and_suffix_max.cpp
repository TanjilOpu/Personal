#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n),pre(n+1),suf(n+2);
    for(auto &it:v)
    {
        cin>>it;
    }
    pre[0]=v[0];
    suf[n-1]=v[n-1];

    for(int i=1;i<n;i++)
    {
          pre[i]=min(pre[i-1],v[i]);
    }

    for(int i=n-2;i>=0;i--)
    {
        suf[i]=max(suf[i+1],v[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]==pre[i] || v[i]==suf[i])
        {
            cout<<1;
        }
        else cout<<0;
    }
    cout<<endl;

}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}