#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c25 =0, c50=0 ;
    while (n--)
    {
        int g;
        cin >> g;
        if (g == 25)
        {
            c25++;
        }
        else if (g == 50)
        {
            c25--;
            c50++;
            if(c25<0)
            {
                cout<<"NO\n";
                return 0;
            }
        }
        else
        {
            if(c25>=1 && c50>=1)
            {
                c25--;
                c50--;
            }
            else if(c25>=3)
            {
                c25 = c25-3;
            }
            else 
            {
                cout<<"NO\n";
                return 0;
            }
        }

    }
            cout<<"YES\n";
            return 0;

}