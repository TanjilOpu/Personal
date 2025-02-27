#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
   cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int mx = 0;
    for (int i = 0; i < n; i+=2)
    {
        if (max(mx, v[i]) != max(mx, v[i + 1]))
        {
            cout << "NO" << endl;
          
            return;
        }
        mx = max(mx, v[i]);
        mx++;
    }
    cout << "YES" << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();

        // for(auto i:v)cout<<i<<" ";
    }
}