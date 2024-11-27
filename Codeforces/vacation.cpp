#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int rest = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            rest++;
        }
        else if (v[i] == 1 && v[i + 1] == 1)
        {
            rest++;
            //i++;
        }
        else if (v[i] == 2 && v[i + 1] == 2)
        {
            rest++;
            //i++;
        }
        else if (v[i] == 1 && v[i + 1] == 3 && v[i + 2] == 2)
        {
            rest++;
            i ++;
        }
         else if (v[i] == 2 && v[i + 1] == 3 && v[i + 2] == 1)
        {
            rest++;
            i ++;
        }
         else if (v[i] == 1 && v[i + 1] == 3 && v[i + 2] == 3 && v[i+3]== 1)
        {
            rest++;
            i += 2;
        }
         else if (v[i] == 2 && v[i + 1] == 3 && v[i + 2] == 3 && v[i+3]== 2)
        {
            rest++;
            i += 2;
        }
    }
    cout << rest << endl;

    return 0;
}