#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll rep = 0, maximum = 0, f = 0, ans;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            rep++;
            f = 1;
        }
        else
        {
            f = 0;
        }
        if (f == 0)
        {
            ans = max(rep, maximum);
            maximum=ans;
            rep = 0;
        }
    }
    ans++;
    cout << ans << endl;
}