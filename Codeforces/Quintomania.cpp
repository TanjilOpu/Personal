#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int d = abs(v[i] - v[i + 1]);
            if (d == 5 || d == 7)
            {
                f = 0;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}