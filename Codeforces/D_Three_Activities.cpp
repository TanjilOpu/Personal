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
    int days;
    cin >> days;
    vector<int> a(days), b(days), c(days);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    for (auto &it : c)
        cin >> it;

    vector<pair<int, int>> a3(days), b3(days), c3(days);
    for (int i = 0; i < days; i++)
    {
        a3.push_back({a[i], i});
    }
    for (int i = 0; i < days; i++)
    {
        b3.push_back({b[i], i});
    }
    for (int i = 0; i < days; i++)
    {
        c3.push_back({c[i], i});
    }
    rsrtall(a3);
    rsrtall(b3);
    rsrtall(c3);
    int maxi = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                int index1 = a3[i].second;
                int index2 = b3[j].second;
                int index3 = c3[k].second;
                if(index1 != index2 && index1!=index3 and index2!= index3)
                {
                    int sum = a3[i].first+b3[j].first+c3[k].first;
                    maxi = max(maxi,sum);
                }
            }
        }
    }
    cout<<maxi<<endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}