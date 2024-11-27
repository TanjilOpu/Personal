#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, val;
    cin >> tc;
    int t, f, i, b;
    while (tc--)
    {
        f = 0;
        string s;
        cin >> s;
        char a, b, temp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                t = i + 1;
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            t = s.size() - 1;
        }
        // if(s.size()==1)
        // {
        //     t=0;
        // }
        if (s[t] == 'z')

        {
            b = 'y';
        }
        else
        {
            a = int(s[t]);
            val = a + 1;
            b = val;
        }

        auto it = s.insert(s.begin() + t, b);
        for (auto it : s)
        {
            cout << it;
        }
        cout << endl;
    }
    return 0;
}