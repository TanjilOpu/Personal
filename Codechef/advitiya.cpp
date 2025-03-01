#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c = "ADVITIYA";
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]>c[i]) 
            {
                sum = sum+abs('Z'-s[i]);
                sum++;
                sum=sum+abs('A'-c[i]);
            }
            else
            {
                int ss = abs(c[i] - s[i]);
                sum = sum + ss;
            }
        }
        cout << sum << endl;
    }
}