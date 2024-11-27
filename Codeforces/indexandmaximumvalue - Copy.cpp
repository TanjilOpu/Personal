#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc, rs;
    cin >> tc;
    vector<ll> rv;
    vector<ll> v;
    while (tc--)
    {
        ll m, n,pos;
        cin >> n >> m;
        vector<ll> rv(m);
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < m; i++)
        {
            char a;
            ll l, r;
            cin >> a >> l >> r;
            rs = *max_element(v.begin(), v.end());
           auto pos = max_element(v.begin(),v.end());
           //cout<<"pos = "<<pos<<endl;
            if (a == '+')
            {
                rs++;
            }
            else
                rs--;
        }
        rv.push_back(rs);

        for (ll i = m; i < m + m; i++)
        {
            cout << rv[i] << " ";
        }
        cout << endl;
    }

    return 0;
}