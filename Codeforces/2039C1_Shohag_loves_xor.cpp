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
    int x,m;
    cin>>x>>m;
    int r=log2(x);
    r++;
     int range=(1<<r)-1;
     //cout<<"r = "<<r<<endl;
      range=min(m,range);
    int cnt=0;
    for(int y=1;y<=range;y++)
    {
        int xr=(x^y);

        if(x!=y && ((x%xr==0 || y%xr==0)))
        {
            cnt++;
        }
       
    }
    cout<<cnt<<endl;
    
}

int32_t main()
{
    fast();
    int t=1;
    cin >> t;
    while (t--)
        solve();
}
