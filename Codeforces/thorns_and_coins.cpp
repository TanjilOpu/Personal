#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int ss; cin>>ss;
        string s; cin>>s;
        int cnt=0;
        for(int i=0;i<ss;i++)
        {
            if(s[i]=='@' )
            {
                cnt++;
            }
            if(s[i]=='*' && s[i+1]=='*')
            {
                break;
            }
        }
        cout<<cnt<<endl;

    }


}
