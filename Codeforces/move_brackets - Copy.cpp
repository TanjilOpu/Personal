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
        int t=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                t++;
            }
            else t--;
            if(t<0)
            {
                m++;
                t=0;
            }
        }
        cout<<m<<endl;
    }
}