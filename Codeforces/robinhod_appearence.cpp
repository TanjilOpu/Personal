#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc,sum;
    cin>>tc;
    while(tc--)
    {
         sum=0;
        ll n; cin>>n;
        vector<ll>v(n);
       for(ll i=0;i<n;i++)
       {
        cin>>v[i];
        sum+=v[i];
       }
        sort(v.begin(),v.end());
        if(n<3)
        {
            cout<<"-1"<<endl;
        }
        else 
        {
            cout<<max(0ll,v[n/2]*2*n-sum+1)<<endl;
        }
    }
    return 0;
}