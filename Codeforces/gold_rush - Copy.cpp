#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll f(int w)
{
    ll a = 1;
    ll b = 2;
    while (a + b != w)
    {
        a++;
        b = b + 2;
        return max(a,b);
    }
}
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin>>n>>m;
        ll a, da;
        ll w = a;
        while (w != m)
        {
            ll f = (w);
        }
    }
}