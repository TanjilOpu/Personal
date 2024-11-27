#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c,d;
        string s;
        cin>>a>>b>>c>>d;
        for(int i=1;i<=12;i++)
        {
            if(i==a || i == b)
            {
                s+='a';
            }
            if(i == c || i==d)
            {
                s+='b';
            }
        }
        if(s == "abab" || s=="baba")
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
