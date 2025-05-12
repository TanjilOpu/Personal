#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {

        cin>>v[i];
    }
    ll cnt=0,ps=0,mx=0;
    for(ll i=0;i<n;i++)
    {
       ps=max(ps,v[i]);
       ll d=ps-v[i];
       cnt+=d;
       mx=max(d,mx);

    }
    cout<<cnt+mx<<endl;
}
int main()
{

    ll t;
    cin>>t;
    while(t--)
        solve();
}
