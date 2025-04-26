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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vn(n);
    vector<int> vm(m);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vm[i];
    }
    int an = 0, am = 0;
   all(vn);
   all(vm);
    int cnt = 0,i=0,j=0;
    while(i<n && j<m)
    {
        if(vm[j] < vn[i]-k)
        {
            j++;
        }
        else if(vm[j] > vn[i]+k)
        {
            i++;
        }
        else{
            i++;
            j++;
            cnt++;
        }

    }

    cout << cnt << endl;
}

int32_t main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
