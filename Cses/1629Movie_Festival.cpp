#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    vector<pair<int,int>>event;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        event.push_back({a,b});
       
       
    }
    // sort(event.begin(),event.end());
    sort(event.begin(), event.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });

    // for(auto it:event)
    // {
        // cout<<it.first<<" "<<it.second<<endl;
    // }
    int stime=0,etime=0,cons=0,cnt=0;
   for(auto it:event)
   {
      
    // cout<<"stime = "<<stime<<endl;
    // cout<<"etime = "<<etime<<endl;
    stime = it.first;
    etime=it.second;
    if(stime<etime && cons<=stime )
    {
        cnt++;
        cons=etime;
    }
   }
   cout<<cnt<<endl;

    
}

int32_t main()
{
    fast();
    int t=1;
   // cin >> t;
    while (t--)
        solve();
}
