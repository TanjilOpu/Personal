#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            t=1;
            break;
        }
    }
    if(t==0)
    cout<<"NO"<<endl;



}
