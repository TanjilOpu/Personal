#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ni,ca,cb;
    cin>>t;
    while(t--)
    {
        ca=0;
        cb=0;
        cin>>ni;
        char str[ni];
        for(int i=0;i<ni;i++)
        {
            cin>>str[i];
            if(str[i]=='A')
            {
              ca++;
            }
            if(str[i]=='B')
            
            {
                cb++;
            }
        }
        cout<<ca<<endl;
        cout<<cb<<endl;
        if(ca>cb)
        {
            cout<<'A'<<endl;
        }
        else if(cb>ca)
        cout<<'B'<<endl;
        else if(ca==cb)
        cout<<'?'<<endl;

    }

    return 0;
}