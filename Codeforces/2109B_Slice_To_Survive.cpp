// problem link :   https://codeforces.com/contest/2109/problem/B
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
int cal(int a, int b)
{
    int cnt=0;
    while(a>1)
    {
        a-=a/2;
        cnt++;
    }
    while(b>1)
    {
        b-=b/2;
        cnt++;
    }
    return cnt;
}
void solve()
{
   int n,m,a,b;
   cin>>n>>m>>a>>b;
   int ans=LLONG_MAX;
     ans = min(ans,cal(n,b));
     ans = min(ans,cal(a,m));
     ans = min(ans,cal(n,m-b+1));
     ans = min(ans,cal(n-a+1,m));
     cout<<ans+1<<endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}