#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ll s1, s2;
   ll d = (y2 - y1)*(x3 - x2)-(x2- x1)*(y3 - y2)  ;
    //s2 = (x2 - x3) / (y2 - y3);
  //  ll d = s1 - s2;
    if (d == 0)
        cout << "TOUCH" << endl;
    else if (d < 0)
        cout << "LEFT" << endl;
    else
        cout << "RIGHT" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}
