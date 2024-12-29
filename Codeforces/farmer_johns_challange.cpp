#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            for (int i = 0; i < n; i++)
                cout << i + 1 << " ";
        }

        else if (n == k)
        {
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
        }

        else
            cout << -1 << " ";
        cout << endl;
    }

    return 0;
}