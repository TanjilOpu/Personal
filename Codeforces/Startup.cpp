#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, b, c;
        cin >> n;
        cin >> k;
        int w = min(n, k);
        vector<int> v;
        while (k--)
        {
            cin >> b >> c;
            v.push_back(c);
        }
        sort(v.rbegin(), v.rend());
        int s = 0;
        for (int i = 0; i < w; i++)
        {
            s += v[i];
        }
        cout << s << endl;
    }
    return 0;
}
