#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int r,c,a; cin>>r>>c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a;
            }
        }
        for(int i=1;i<r;i--)
        {
            for(int j=1;j<c;j++)
            {
                cout<<a<< " ";
            }
             cout<<endl;
        }
       // for(int i=0;i<=0;i++)

    }
    return 0;
}
