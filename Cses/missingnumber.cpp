#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll r=(n*(n+1))/2;
    ll x,sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        sum+=x;
    }
    int o = r-sum;
    cout<<o<<endl;
}