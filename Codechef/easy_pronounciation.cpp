#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            sum++;
        }
        else{
            sum=0;
        }
        if(sum>4)
        {
            cout<<"sum = "<<sum<<endl;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
       solve();
    }

    return 0;
}