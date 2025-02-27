#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    map<int, int> mp;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    ll ans = -1;
    for (auto it : mp)
    {
        ll temp = it.second;
        ans = max(ans, temp);
    }
    cout << ans << endl;

    return 0;
}