#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int as;
        cin >> as;
        
        vector<int> v(as);
        for (int i = 0; i < as; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (as == 1)
        {
            cout << 0 << endl;
        }
        else 
        {
            int r = v[as - 1]-v[0];
        cout << r << endl;
        }
        
    }

    return 0;
}