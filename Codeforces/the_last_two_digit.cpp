#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
  
     a%=100;
     b%=100;
     c%=100;
     d%=100;
        ll res = (a*b*c*d)%100;
        if(res<10)
        {
            cout<<0;
        }
        cout<<res<<endl;
    
 
    return 0;
}