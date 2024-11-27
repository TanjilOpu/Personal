#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int c1 = 0, c0 = 0, j, f1 = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (flag == 0)
                {
                    c0++;
                    flag = 1;
                }
            }
            if (s[i] == '1')
            {
                c1++;
                flag = 0;
            }
        }
        if(c1>c0)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
        
    }

    return 0;
}