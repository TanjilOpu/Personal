#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, x, ss;
    cin >> n >> x >> ss;
    string s;
    cin >> s;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            x--;
            ss--;
        }
        else
        {
            x++;
            ss--;
        }

        if (x == 0)
        {
            cnt++;
            break;
        }
        if (ss == 0)
        {
            break;
        }
    }
    // if (ss == 0)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    if (cnt == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        x = 0;
    }
   // cout << "x = =" << x << endl;
    ll ns = 0;
    ll flag = 0;
    if (ss > 0)
    {
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x--;
                ns++;
            }
            else
            {
                x++;
                ns++;
            }
            if (x == 0)
            {
               // cout << x << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            ll res = ss / ns;
            res++;
            cout << res << endl;
            return;
        }
        // cout << "ss = " << ss << endl;
        // cout << "ns = " << ns << endl;
    }

    cout << cnt << endl;
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