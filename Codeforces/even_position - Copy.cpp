#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for(int i=n-1;i>=0;i-=2)
        {
           if(s[i]==')')
           {
            ans++;
           }
           else ans+=3;


        }
        cout<<ans<<endl;
    }
    return 0;
}