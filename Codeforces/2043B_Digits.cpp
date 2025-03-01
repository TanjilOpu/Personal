#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,d;
    cin>>n>>d;
    cout<<1<<" ";
    if(d%3==0 || n>=3)
    {
        cout<<3<<" ";
    }
    if(d==5)
    {
        cout<<5<<" ";
    }
    if(d==7 || n>=3)
    {
        cout<<7<<" ";
    }
    if(d== 9 || n>=6)
    {
        cout<<9;
    }
    else if(n>=3 && d%3==0)
    {
        cout<<9;
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