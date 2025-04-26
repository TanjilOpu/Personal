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
    int n, m;
    cin >> n >> m;
    vector<int> f(n + 5);
    vector<int> b(m + 5);
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<f[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=1;i<=m;i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int ps = 0, x = 1;
    vector<int> psa(n + 5);
    for (int i = 1; i <= n; i++)
    {
        if (f[i] >= b[x] && x < m)
        {
            ps++;
            psa[i] = ps;
            //  psa.push_back(ps);
            x++;
        }
        else
        {
            psa[i] = ps;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << psa[i] << " ";
    // }
    // cout << endl;
    int ss = 0;
    x = m;
    vector<int> ssa(n+5);
    for (int i = n; i >= 1; i--)
    {
        if (f[i] >= b[x] && x >= 1)
        {
            ss++;
            // ssa.push_back(ss);
            ssa[i] = ss;
            x--;
        }
        else
        {
            ssa[i] = ss;
        }
    }
    //   reverse(ssa.begin(),ssa.end());
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << ssa[i] << " ";
    // }
    // cout << endl;

    
    if (ssa[1] >= m || psa[n] >= m)
    {
        cout << 0 << endl;
        return;
    }
    int ans = INT_MAX;

    for (int i = 0; i <= n ; i++)
    {
        int ind1=psa[i];
        int ind2=ssa[i+1];
        if (ind1+ind2 >= m)
        {
            ans=0;
        }
        if(psa[i]+1+ssa[i+1]>=m)
        {
            ans=min(ans,b[ind1+1]);
        }
    }
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
        return;
    }
    cout << ans << endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
// 0 1 1 1 1 1 2 2 3
// 3 3 3 3 3 2 1 0 0
