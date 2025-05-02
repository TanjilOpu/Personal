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
    int n, k;
    cin >> n >> k;
    if ((n % 2 != 0 && k % 2 == 0) || (n % 2 == 0 && k * 2 > n && k % 2 != 0) || k > n)
    {
        no;
    }
    else
    {
        
        if (n == k)
        {
            yes;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if (n % 2 == 1)
        {
            yes;
            k--;
            while (k--)
            {
                cout << 1 << " ";
                n--;
            }
            cout << n << endl;
        }
        else
        {

            if ((n - k - 1) % 2 == 1)
            {
                cout << "YES\n";
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 1 << " ";
                    n--;
                }
                cout << n << endl;
            }
            else
            {
                if (k * 2 > n)
                {
                    cout << "NO\n";
                    return;
                }
                cout << "YES\n";
                for (int i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << n << endl;
                
            }
        }
    }
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
