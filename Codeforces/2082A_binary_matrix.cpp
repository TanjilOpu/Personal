#include <bits/stdc++.h>
using namespace std;
int main()
{
  
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            for (int j = 0; j < m; j++)
            {
                s += a[i][j] - '0';
            }
            if (s & 1)
                r++;
        }
        int c = 0;
        for (int j = 0; j < m; j++)
        {
            int s = 0;
            for (int i = 0; i < n; i++)
            {
                s += a[i][j] - '0';
            }
            if (s & 1)
                c++;
        }
        cout << max(r, c) << "\n";
    }
    return 0;
}