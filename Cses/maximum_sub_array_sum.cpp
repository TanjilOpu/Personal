#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll mx = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
        // cout<<sum<<endl;
        if (sum < 0)
        {
            sum = 0;
        }
        else
        {

            mx = max(mx, sum);
            // cout<<mx<<endl;
        }
    }
    if(mx==0)
    {
        ll index = *max_element(v.begin(),v.end());
      cout<<index;
    }
    else
    cout << mx << endl;
}