#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        int l;
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            cin >> s[i];
        }
        int c1 = 0, c2 = 0;
        int r = l;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '<' && s[i + 1] == '>')
            {
                r -= 2;
                i++;
            }
            else if (s[i] == '>' && s[i + 1] == '<')
            {
                r -= 2;
                i++;
            }
        }
        int result = r + 1;
        cout << result << endl;
    }
    return 0;
}