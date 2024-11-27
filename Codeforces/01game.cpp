#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        int c1 = 0, c0 = 0;
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                c0++;
            }
            else
                c1++;
        }
        if (c1 == 0 || c0 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            int r = min(c0, c1);
            if (r % 2 == 1)
            {
                cout << "DA" << endl;
            }
            else
                cout << "NET" << endl;
        }
    }
    return 0;
}