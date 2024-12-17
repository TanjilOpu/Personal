#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n<=4)
        {
            cout<<-1<<endl;

        }
        else {
            for(int i = 1;i<=n;i+=2)
            {
                if(i==5)
                {
                    continue;
                }
                cout<<i<<" ";
            }
            cout<<5<<" ";
            cout<<4<<" ";
            for(int i = 2;i<=n;i+=2)
            {
                if (i==4)
                {
                    continue;
                }
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}