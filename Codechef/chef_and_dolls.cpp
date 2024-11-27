#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            //ll x;
            cin>>v[i];
           // v.push_back(x);
        }
        sort(v.begin(),v.end());
        // for(auto it:v)
        // {
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        for(ll i=0;i<n;++i)
        {
            if(v[i] == v[i+1])
            {
                i++;
            }
            // else if(i==n-1)
            // {
            //     cout<<v[i]<<endl;
            // }
            else {
                cout<<v[i]<<endl;
            }
        }
    }

}