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
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int lc = 0, rc = 0, coclete = 0, l = 0, r = n + 1, lcw = 0, rcw = 0;
        while (l < r)
        {
            if (lcw == rcw)
            {
                l++;
                coclete = lc + rc;
                lcw = lcw + arr[l];
                lc++;
            }
            while (lcw > rcw)
            {
                r--;
                rcw = rcw + arr[r];
                rc++;
            }
            while (lcw < rcw)
            {
                l++;
                lcw = lcw + arr[l];
                lc++;
            }
        }
        cout << coclete << endl;
    }
    return 0;
}