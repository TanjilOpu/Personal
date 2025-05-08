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

        int n, d, pass_cost;
        cin >> n >> d >> pass_cost;
      
        vector<int> fares(n);
        for (int i = 0; i < n; i++) cin >> fares[i];
      
        sort(fares.begin(), fares.end());
      
        // Initial answer: pay fare for every day individually
        int64_t min_total_cost = accumulate(fares.begin(), fares.end(), 0LL);
      
        int64_t prefix_sum = 0;
      
        // Try all possible options from where you will use only one-day-passes
        for (int i = 0; i < n; i++) {
          int64_t remaining_days = n - i;
      
          // Number of passes needed to cover remaining days
          int64_t passes_needed = (remaining_days + d - 1) / d;
      
          // Cost = fare for first i days + passes for remaining days
          int64_t current_cost = prefix_sum + passes_needed * pass_cost;
      
          min_total_cost = min(min_total_cost, current_cost);
      
          // Update prefix sum to include fare[i]
          prefix_sum += fares[i];
        }
      
        cout << min_total_cost << '\n';
      
}

int32_t main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}
