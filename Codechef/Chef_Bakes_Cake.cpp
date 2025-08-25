#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int mx_carry=y/x;
    int ans=0;
    while(n>0)
    {
        ans++;
        n-=mx_carry;
    }
    cout<<ans<<endl;
}