#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else break;
        }
        int d=0;
        for(int i=cnt;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                d++;
            }
        }
        cout<<cnt+d-1<<endl;

    }
}