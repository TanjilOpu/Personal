#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
         ll  r=n-1,l=0,cnt=0;
         while(l<=r)
         {
            if(v[l]+v[r]<=x)
            {
                cnt++;
                l++;
                r--;
            }       
            else if(v[l]+v[r]>x)
            {
                cnt++;
                r--;
            }
            else if(r==l)
            {
                cnt++;
            }

            
         }
         cout<<cnt<<endl;
    return 0;
}
