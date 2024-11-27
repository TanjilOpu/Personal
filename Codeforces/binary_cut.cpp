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
        int c=1;
        int t=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                c++;
            }
            if(s[i] == '0' && s[i+1] == '1')
            {
                t=1;
            }
            
        }
        int r=c-t;

        cout<<r<<endl;
    }
    return 0;
}
