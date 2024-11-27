#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define nl '\n'
int main()
{
    ll tc;
    ll sum;
    cin>>tc;
    while(tc--)
    {
        ll as,q;
        cin>>as>>q;
        vector<ll>v(as+1,0);
        for(ll i=1;i<=as;i++)
        {
            cin>>v[i];
        }
        vector<ll>ps(as+1,0);
        for(ll i=1;i<=as;i++)
        {
           ps[i]=ps[i-1]+v[i];
        }
        
        while(q--)
        {
            sum=ps[as];
            ll l,r,k;
            cin>>l>>r>>k;
               sum-=(ps[r]-ps[l-1]);
               sum+=((r-l+1)*k);
            if(sum % 2 ==1)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
    return 0;
}