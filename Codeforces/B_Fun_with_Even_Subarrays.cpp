// problem link :
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define inputvc(n)              \
    for (int i = 0; i < n; i++) \
    cin >> v[i]
#define outputvc(n)             \
    for (int i = 0; i < n; i++) \
    cout << v[i] << ' '
#define f1(n) for (int i = 1; i <= n; i++)
#define srtall(a) sort(a.begin(), a.end())
#define rsrtall(a) sort(a.rbegin(), a.rend())
const int mod = 1e9 + 7;
#define PI acos(-1)
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int target = v.back();
    int sz = 1;
    int operation = 0;
    for (int i = n; i > 0;)
    {
        if (i == 1)
        {
            break;
        }
        if (v[i - 1] == target && i > 1)
        {
            i--;
        }
        else
        {
            debug(v[i]);
            operation++;
            i -= (n - i + 1);
        }
    }
    cout << operation << nl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}