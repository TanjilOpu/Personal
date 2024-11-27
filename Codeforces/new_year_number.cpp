#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
   {
        ll y;
       cin>>y;
       ll r=y%2020;
       ll nofr=y/2020;
        ll f=y-(r*2021);
        
        if(f%2020==0 && f>=0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }


    return 0;
}