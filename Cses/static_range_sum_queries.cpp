#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    ll pre_sum[n+1];
    pre_sum[0]=0;
    for(ll i=1;i<=n;i++)
    {
        pre_sum[i]=v[i]+pre_sum[i-1];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<pre_sum[r]-pre_sum[l-1]<<endl;
    }
}