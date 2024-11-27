#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'&&s[i+3]=='i'&&s[i+4]=='e')
            {
                c++;
                i+=4;
            }
            
            else if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')
            {
                c++;
                i+=2;
            }
            
            else if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
            {
                c++;
                i+=2;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}