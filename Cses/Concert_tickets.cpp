#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>vn(n);
    vector<ll>vm(m);
    for(ll i=0;i<n;i++)
    {
        cin>>vn[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>vm[i];
    }
    sort(vn.begin(),vn.end());
    sort(vm.begin(),vm.end());

    return 0;
}