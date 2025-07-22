// problem link :
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
    int canBeeven = 1, canBeod = 1;
    int evgcd = 0, odgcd = 0;
    vector<int> v(n + 1);
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i];
        if (i % 2 == 0)
        {
            evgcd = gcd(evgcd, v[i]);
        }
        else
            odgcd = gcd(odgcd, v[i]);
    }

    for (int i = 0; i < n ; i += 2)
    {
        if (v[i] % odgcd == 0)
        {
            canBeod = 0;
            break;
        }
    }
    for (int i = 1; i < n ; i += 2)
    {
        if (v[i] % evgcd == 0)
        {
            canBeeven = 0;
            break;
        }
    }

    if (canBeeven == 0 && canBeod == 0)
        cout << 0 << endl;
    else if (canBeeven == 1)
        cout << evgcd << endl;
    else
        cout << odgcd << endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}