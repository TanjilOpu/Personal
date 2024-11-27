#include<bits/stdc++.h>
using namespace std;
int main( )
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
         for(int j=i+1;j<s.size();j++)
        if(s[i]==s[j])
            s[i]='0';
          // s.erase(s.begin()+i,s.begin()+j);
    }
    if(s.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
   if(s.size()%2!=0)
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}
