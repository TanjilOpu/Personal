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
    cin>>n;
    vc v(n);
    f0(n) cin >> v[i];
    int l = 0, r = n - 1;
    int ind1, ind2;
    while (l <= r)
    {
        if (v[l] != v[r])
        {
            ind1 = v[l];
            ind2 = v[r];
            break;
        }
        l++;
        r--;
    }
    // debug(ind1);
    // debug(ind2);
      vc vind1,vind2,rvind1,rvind2;
      for(int i=0;i<n;i++)
      {
        if(v[i]==ind1) continue;
        else vind1.push_back(v[i]);
      }
      rvind1 = vind1;
      reverse(vind1.begin(),vind1.end());
       if(rvind1==vind1)
      {
        yes;
        return;
      }
       for(int i=0;i<n;i++)
      {
        if(v[i]==ind2) continue;
        else vind2.push_back(v[i]);
      }
      rvind2 = vind2;
      reverse(vind2.begin(),vind2.end());
       if(rvind2==vind2)
      {
        yes;
        return;
      }
      no;
     
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}