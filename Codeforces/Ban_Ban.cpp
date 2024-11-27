#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
  string s = "BAN";
  ll tc, sn, m, ini, inj;
  cin >> tc;
  while (tc--)
  {
    cin >> sn;
    // for (ll i = 1; i < sn; i++)
    // {
    //   s = s + s;
    // }
    int fB = 1;
    int lA = 3 * sn - 1;
    cout << (sn + 1) / 2 << endl;
    while (fB < lA)
    {
      cout << fB << " " << lA <<endl;
      fB = fB + 3;
      lA = lA - 3;
    }
  }

  return 0;
}