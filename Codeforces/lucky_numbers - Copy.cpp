#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int cmx = 0;
        int cmn = 10000;
        int x, y, maxi, mini, r, p;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
        {
            cout<<i<<endl;
            while(i!=0)
            {
                p=i%10;
                cout<<"p == "<<p<<endl;
                i=i/10;
            }
        }
    }
    return 0;
}