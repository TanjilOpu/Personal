#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    vector<ll> v;
    ll n;
    cin >> n;
    ll s=n*(n+1);
    s/=2;
    ll sq=sqrt(s);
    if(sq*sq==s)
    {
        cout<<-1;
    }
    else
    {

        cout << 2 << " " << 1 << " ";
        ll nxt = 4;
        ll sum = 3;
        for (ll i = 3; i <= n; i++)
        {
            sum += i;
            //  cout<<"sum"<<sum<<endl;
            if ((sum == nxt))
            {
                sum -= i;
                v.push_back(i);
                sum += i + 1;
                cout << i + 1 << " ";
                i++;
                ll t = sqrt(nxt);
                t++;
                nxt = t * t;
            }
            else
            {
                cout << i << " ";
            }
            if (sum > nxt)
            {
                ll t = sqrt(nxt);
                t++;
                nxt = t * t;
            }
        }
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
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