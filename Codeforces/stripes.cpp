#include<bits/stdc++.h>
using namespace std;
char r;
string s;
int main()
{
int t,cr;
cin>>t;
while (t--)
{
    int f=0;
    for(int i=0;i<8;i++)
    {
       cr=0;
        cin>>s;
        for(int j=0;j<8;j++)
        {
            if(s[j]=='R')
            {
                cr++;
            }
            if(cr==8)
            {
               f=1;
               break;

            }
        }
    }
    if(f==1)
    {
        cout<<"R"<<endl;
    }
    else cout<<"B\n";


}


}
    