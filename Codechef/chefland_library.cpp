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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mx = *max_element(v.begin(), v.end());
        // reverse(v.begin(),v.end());
        // cout << mx << endl;
        int cnt = 0;
        for (int i = 1; i <= mx; i++)
        {
            int p = 0;
            while (p < v.end())
            {
                auto it = find(v.begin(), v.end(), i);
                p=it-v.begin();
            }
            cnt=cnt+p+1;
        }
        cout << cnt << endl;
    }
}