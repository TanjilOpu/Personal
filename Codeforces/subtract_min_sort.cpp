#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        ll t=n-1;
        ll i=0;
       while(i<t)
       {
          ll mini=min(v[i],v[i+1]);
          
          v[i]=v[i]-mini;
          v[i+1]=v[i+1]-mini;
         // cout<<"mini = "<<mini<<"v[i] = "<<v[i]<<"  v[i+1] = "<<v[i+1]<<endl;
          if(v[i]>v[i+1])
          {
            cnt=0;
            break;
          }
          i++;
          cnt++;

       }
       if(cnt==0) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
        
    }
}