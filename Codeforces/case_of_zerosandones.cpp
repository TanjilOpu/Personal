#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ss;
    cin>>ss;
    string s;
    int  c1=0,c0=0,t,result;
    for(int i=0;i<ss;i++)
    {
        char c;
        cin>>c;
        s.push_back(c);

    }
    for(int i=0;i<ss;i++)
    {
        if(s[i]=='0')
        {
           c0++;
        }
        else if(s[i]=='1')
        {
            c1++;
        }
    }
    if(c0==0 && c1==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(c1>c0)
    {
        c1=c0;
    }
    result = ss-c1*2;
    cout<<result<<endl;

    return 0;
}