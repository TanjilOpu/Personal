#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << endl;
        }

        else
        {
            if (b > 2 * a)
            {
                cout << 0 << endl;
            }
            else
            {

                while (a != b)
                {
                    a--;
                    b = b - 2;
                }
                cout << a << endl;
            }

            // cout<<a<<endl;
        }
    }
}