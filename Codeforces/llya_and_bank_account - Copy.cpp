#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl '\n'
int main()
{    
    ll n;
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }  
    else
    {
        ll last=n%10;
        ll t=n/10;
        ll  second_last=t%10;
        ll t1=t/10;
        if(abs(last)>abs(second_last))
        {
            cout<<t<<nl;
        }
        else
        {
            
            ll r=t1*10;
            ll result=r+last;
            cout<<result<<nl;

        }
    


    } 
    return 0;
}