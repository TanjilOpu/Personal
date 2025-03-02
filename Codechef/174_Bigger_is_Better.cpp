#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = count(s.begin(), s.end(), 'z');
        if (z == n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << 'z';
            }
            cout << endl;
        }
    }
    return 0;
}