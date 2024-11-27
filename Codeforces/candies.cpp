#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl '\n'
int main()

{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll x;
        ll sum=1;
        for(int i=1;i<n;i++)
        {
            sum+=pow(2,i);
            ll  r=n/sum;
            //cout<<"sum = "<<sum<<endl;
            if(r*sum==n)
            {
                cout<<r<<endl;
                break;
            }
        }
        
    }

    return 0;
}