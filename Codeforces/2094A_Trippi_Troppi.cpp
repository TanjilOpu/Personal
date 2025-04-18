#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, os = "";
    getline(cin, s);
    int l = s.size();
    //   os = s[0];
    bool tar = true;
    for (int i = 0; i < l; i++)
    {
        if (tar && s[i] != ' ')
        {
            os += s[i];
            tar = false;
        }
        if (s[i] == ' ')
        {
            tar = true;
        }
    }
    cout << os << endl;
}
int main()
{
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        solve();
    }
}