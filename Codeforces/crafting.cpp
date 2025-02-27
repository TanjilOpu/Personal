#include <bits/stdc++.h>
#define ll long long int
// #define pb push_back
// #define ppb pop_back
// #define ld long double
// #define ui unsigned int
// #define mod 1000000007
// #define stp setpercision
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> cv(n);
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = v[i] - a[i];
        if (x < 0)
            cnt++;
        if (cnt == 2)
        {
            //cout << "1" << endl;
            no;
            return;
        }
        cv[i]=x;
    }
  //  for(auto it:cv) cout<<it<<" ";
    sort(cv.begin(), cv.end());
    // cout<<"cv [ 0]= "<<cv[0]<<endl;
    // cout<<"cv [ 1]= "<<cv[1]<<endl;
    ll cd = cv[0] + cv[1];
   // cout<<"cd = "<<cd<<endl;
    if (cd < 0)
    {
        //cout << "2" << endl;
        no;
        return;
    }
    yes;
    return;
}
int main()
{
    faster();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}