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
        if(n<2020)
        {
            cout<<"NO"<<endl;
        }
        else {
            if(n%2020==0)
            {
                cout<<"YES"<<endl;
            }
            else if(n%2021==0)
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                ll r=n%2020;
              //  cout<<"r = "<<r<<endl;
                if(r<=n/2020)
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
                
            }
        }
    }
 
 
 
 
    return 0;
}