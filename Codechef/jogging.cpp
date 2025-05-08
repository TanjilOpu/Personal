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
int power(int d)
{
    int b = 2;
    int r = 1;
    while (d > 0)
    {
        if (d & 1)
        {
            r = (r * b) % mod;
        }
        b = (b * b) % mod;
        d = d / 2;
    }
    return r;
}

void solve()
{
    int d, x;
    cin >> d >> x;
    int p = power(d - 1);
    p = p % mod;
    int res = (p * x) % mod;
    cout << res << endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
