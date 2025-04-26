#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES"<<endl
#define no cout << "NO"<<endl
#define nn cout << endl
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define all(a) sort(a.begin(),a.end())
#define rall(a) sort(a.rbegin(),a.rend())
const int mod = 1e9 + 7;
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>psa(n+1,0);
    vector<int>ssa(n+2,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
       // psa[i]=psa[i-1]+v[i];
    }
    int ans=0,maxa=0;
    for(int i=0;i<n;i++)
    {
        ans+= v[i];
        if(ans<0)
        {
            ans=0;
        }
        else{
            maxa=max(ans,maxa);
        }
    }
    if(maxa==0)
    {
        int r=*max_element(v.begin(),v.end());
        cout<<r<<endl;
     //   cout<<"YEs"<<endl;
        return;
    }
    cout<<maxa<<endl;

































    // for(int i=n;i>=1;i--)
    // {
    //     ssa[i]=ssa[i+1]+v[i];
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<psa[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<ssa[i]<<" ";
    // }
    // cout<<endl;
    
}

int32_t main()
{
    fast();
    int t=1;
    //cin >> t;
    while (t--)
        solve();
}
