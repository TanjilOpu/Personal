#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,c=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(ll i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        { 
            c=c+(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<c<<endl;

}