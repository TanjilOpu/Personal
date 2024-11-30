#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll cnt =0;
    ll d = 5;
    while(n/d>=1)
    {
        cnt  = cnt + n/d;
        d = d*5;
    }
    // ll  r5,r25;
    // r5= n/5;
    // r25 = n/25;
    // ll r = r5+r25;
    cout<<cnt<<endl;
}