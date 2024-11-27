#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int cs = 1;
    while (tc--)
    {

        ll m, n;
        cin >> m >> n;
        int s = n;
        int cnt = 1;
        while (n % m != 0)
        {
            cnt++;
            n = (n * 10) + s;
        }
        printf("case %d: %d\n", cs, cnt);
        cs++;
    }

    return 0;
}