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

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int lowest = fibo(n+1);
    int highest = fibo(n + 2);
    // cout<<"low = "<<lowest<<endl;
    // cout<<"high ="<<highest<<endl;
     for(int i=0;i<m;i++)
     {
        int a,b,c;
        cin>>a>>b>>c;
        int mx = max(a,max(b,c));
        int mn = min(a,min(b,c));
        // cout<<"mx = "<<mx<<endl;
        // cout<<"mn = "<<mn<<endl;
        if(mn>=lowest && mx>=highest)
        {
            cout<<'1';
        }
        else cout<<'0';
     }
     cout<<endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}