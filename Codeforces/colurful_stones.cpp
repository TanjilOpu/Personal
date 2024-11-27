#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    int pos=1;
    int sin=0;
    for(int i=0;i<t.size();i++)
    {
        if(s[sin]==t[i])
        {
            pos++;
            sin++;
        }

    }
    cout<<pos<<endl;

}
