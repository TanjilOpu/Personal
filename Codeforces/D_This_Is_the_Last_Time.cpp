#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll taka,l,r;
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<pair<ll,ll>,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>l>>r>>taka;
        v[i]={{l,r},taka};

    }
    sort(v.begin(),v.end());


    // for(auto it:v)
    // {
    //     cout<<it.first.first<<it.first.second<<it.second<<endl;
    // }

    for(int i=0;i<n;i++)
    {
        
        
        ll lc = v[i].first.first;
        ll rc = v[i].first.second;
        ll taka = v[i].second;
        // cout<<lc<<rc<<taka<<endl;
        if(k>=lc && k<=rc && k<taka)
        {
        //   cout<<v[i].first.first<<v[i].first.second<<v[i].second<<endl;
           k = taka;

       }
    }
    // cout<<"result = "<<k <<endl;
    cout<<k<<endl;


}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}