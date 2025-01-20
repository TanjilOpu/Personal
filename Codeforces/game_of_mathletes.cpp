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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        // for (auto it : v)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l < r)
        {
            if ((v[l] + v[r]) == k)
            {
                cnt++;
                l++;
                r--;
            }

            else if ((v[l] + v[r]) > k)
                r--;
            else
                l++;
        }
        cout << cnt << endl;
    }
}