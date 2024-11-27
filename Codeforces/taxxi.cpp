#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            c1++;
        if (v[i] == 2)
            c2++;
        if (v[i] == 3)
            c3++;
    }
    while (c3 > 0 && c1 > 0)
    {
        c3--;
        c1--;
        n--;
    }
    while (c1 > 1 && c2 > 0)
    {
        c2--;
        c1-=2;
        n-=2;
    }
     while (c1 > 0 && c2 > 0)
    {
        c2--;
        c1--;
        n--;
    }
    while (c2 >= 2)
    {
        c2 -= 2;
        n--;
    }
    while (c1 > 1)
    {
        int m = 0;
        if (c1 > 3)
            m = 3;
        else if (c1 > 2)
            m = 2;
        else if (c1 > 1)
            m = 1;

        c1 -= 4;
        n -= m;
    }
    cout << n << endl;
}