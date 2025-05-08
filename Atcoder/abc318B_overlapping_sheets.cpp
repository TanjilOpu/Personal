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
int arr[100][100];

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i < b; i++)
        {
            for (int j = c; j < d; j++)
            {
                arr[i][j] = 1;
            }
        }
    }
    int sum=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++)
        {
            if(arr[i][j])
            {
                sum++;
            }
        }
    }
    cout<<sum<<endl;
}

int32_t main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
