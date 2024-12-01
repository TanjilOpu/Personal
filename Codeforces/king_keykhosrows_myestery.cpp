#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int ra=0,rb=-1;
        int m=a;
        while(ra!=rb)
        {
            ra = m%a;
            rb = m%b;
            m++;

        }
        cout<<m-1<<endl;

    }
}