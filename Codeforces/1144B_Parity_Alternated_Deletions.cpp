// problem link :   https://codeforces.com/problemset/problem/1144/B
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nn cout << endl
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define all(a) sort(a.begin(), a.end())
#define rall(a) sort(a.rbegin(), a.rend())
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
    cin >> n;
    vc vo;
    vc ve;
    vc v(n);
    int ev = 0, od = 0;
    f0(n)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            ev++;
            ve.push_back(v[i]);
        }
        else
        {
            od++;
            vo.push_back(v[i]);
        }
    }

    all(vo);
    all(ve);
    // for(auto it:ve) cout<<it<<" ";
    // cout<<endl;
    //  for(auto it:vo) cout<<it<<" ";
    // cout<<endl;
    int sum=0;
    if(ev>od)
    {
        int lev = ev-od-1;
        // int sum=0;
        // cout<<"lev "<<lev<<endl;
        for(int i=0;i<lev;i++)
        {
              sum+=ve[i];
        }
    }
    else if(ev<od)
    {
       int lod = od-ev-1;
        // int sum=0;

        for(int i=0;i<lod;i++)
        {
              sum+=vo[i];
        }
    }
    if (abs(ev - od) <= 1)
    {
        cout << 0 << endl;
        return;
    }
     else cout<<sum<<endl;
}

int32_t main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}