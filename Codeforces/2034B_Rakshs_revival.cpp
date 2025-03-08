#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int cnt = 0;
    int flag = 0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            cnt++;
            if(cnt==m)
            {
                flag++;
                i+=k-1;
                cnt=0;
            }
        }
        else cnt=0;
    }
    cout<<flag<<endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}