#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k,result;
        cin >> n >> k;
        vector<ll> v(n);

        int cnb = 0, cna = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll a = v[0];
        ll res  =0 ;
        ll rem = k;
        

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cna = v[i];
                res =res+cna;
            }
            else
            {
                int val = min(rem,v[i-1]-v[i]);
                v[i] = v[i]+val;
                 rem = rem - val;
                 res = res - v[i];
                   
            }
               
        }
       
        cout<<res<<endl;
    }

    return 0;
}