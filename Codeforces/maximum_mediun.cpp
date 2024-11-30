#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll res = v[n/2];
    ll l = res;
   ll r = v[n-1] + k;
   ll mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
      ll sum = 0;
        for (ll i = n / 2; i < n; i++)
        {
            if (mid > v[i])
            {
                sum += mid - v[i];
            }
        }
        if (sum <= k)
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << res << endl;
}