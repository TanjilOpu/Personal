#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    string s="abcde";
    while(tc--)
    {
        int n;
        cin>>n;
        string ans="";
       int max=n/5;
       int last = n%5;
       while(max--)
       {
        ans+=s;
       }
       for(int i=0;i<last;i++)
       {
        ans+=s[i];
       }
       cout<<ans<<endl;

    }
}