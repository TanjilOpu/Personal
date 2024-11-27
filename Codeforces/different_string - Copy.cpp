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
        int  r=0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                r=1;
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                break;
            }
        }
        if(r==0)
        {
            cout<< "No\n";
        }
        else
        {
            cout<< "Yes\n";
            for(int i=0; i<s.size(); i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
