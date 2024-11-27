#include <bits/stdc++.h>
using namespace std;
int solve(long long a, long long b)
{
    long long num = 1;
    while (num++)
    {
        int f = 0;
        if (num % a == 0 && num % b == 0)
        {
            for (int i = a + 1; i < b; i++)
            {
                if (num % i == 0)
                {
                    f = 1;
                    break;
                }
            }
            if(f==0)
            {
                return num;
            }
        }
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, n;
        cin >> a >> b;
        int result = solve(a, b);
        cout<<result<<endl;
    }
}