#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,tc;
    cin>>tc;
    while(tc--)
    {
        int r=0,mini;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
        {
            r=(i-a)+(b-i);
            if(i==a)
            {
                mini=r;
            }
            else if(r<mini)
            {
                mini=r;
            }
        }
        cout<<mini<<endl;
    }

    return 0;
}
