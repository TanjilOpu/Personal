#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> va;
    vector<ll> vb;
    while (a != 0 && va.size() < 32)
    {
        ll r = a % 2;
        a = a / 2;
        va.push_back(r);
    }
    while (va.size() < 32)
    {
        va.push_back(0);
    }
    if (va.size() == 0)
    {
        va.push_back(0);
    }

    while (b != 0)
    {
        ll r = b % 2;
        b = b / 2;
        vb.push_back(r);
    }
    while (vb.size() < 32)
    {
        vb.push_back(0);
    }
    if (vb.size() == 0)
    {
        vb.push_back(0);
    }
    ll cnt = 0;
    for (int i = 0; i < 32; i++)
    {
        if (va[i] == vb[i])
        {
            cnt++;
        }
        else
            break;
    }
    ll ans = (1LL << cnt);
    cout << ans << endl;
}
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}