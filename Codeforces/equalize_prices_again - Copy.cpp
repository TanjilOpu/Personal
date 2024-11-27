#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll as;
        cin>>as;
        ll s=0;
        for(ll i=0; i<as; i++)
        {
            ll x;
            cin >>x;
            s=s+x;
        }
        ll r=ceil( (double)s/as);
        cout<<r<<endl;
    }
    return 0;
}
