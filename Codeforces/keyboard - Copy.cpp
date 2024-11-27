#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiop[asdfghjkl;zxcvbnm,./";
       int k;
    
    char c;
    cin>>c;
    string l;
    if(c=='R')
    {
         k=-1;
    }
    else  k=1;
    string s2;
    cin>>s2;
    for(int i=0;i<s2.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==s2[i])
            {
                s2[i]=s[j+k];
                break;
            }
            
        }
    }
    cout<<s2<<endl;
    return 0;
}