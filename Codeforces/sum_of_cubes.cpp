#include<bits/stdc++.h>
using namespace std;
 #define ll long long int
int main()
{
 ll tc;
 cin>>tc;
 while(tc--)
 {
    ll n;
    cin>>n;
    ll r=sqrt(n);
    ll l=1;
    ll f=0;
    while(r>=l)
    {
        ll a=l*l*l;
        ll b=r*r*r;
        if(a+b==n)
        {
            cout<<"YES"<<endl;
            f=1;
            break;
        }
        else if(a+b>n) r--;
        else l++;
    }
    if(f==0)
    {
        cout<<"NO"<<endl;
    }

 }
 
 
 
    return 0;
}