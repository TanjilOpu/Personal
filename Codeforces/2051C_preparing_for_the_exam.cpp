#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> vm(m);
        unordered_set<ll> vk;
        for (ll i = 0; i < m; i++)
            cin >> vm[i];
        for (ll i = 0; i < k; i++)
        {
            ll t;
            cin >> t;
            vk.insert(t);
        }
        if (n == k)
        {
            for (ll i = 0; i < m; i++)
            {
                cout << '1';
            }
            cout << endl;
        }
        else if (n - 1 != k)
        {
            for (ll i = 0; i < m; i++)
            {
                cout << '0';
            }
            cout << endl;
        }
        else
        {
            for (ll i = 0; i < m; i++)
            {
                if (vk.count(vm[i]))
                {
                    cout<<'0';
                }
                else cout<<'1';
            }
            cout<<endl;
        }
    }

    return 0;
}