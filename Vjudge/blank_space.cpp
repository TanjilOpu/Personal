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
        int flag = 0;
        int cnt = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                cnt++;
                res = max(cnt,res);
            }
            else cnt=0;

           
        }
        cout << res << endl;
    }
}