#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        if(b>a)
        {
            int t=a;
            a=b;
            b=t;
        }
        while(a>b)
        {
            cnt++;
            a=a-c;
            b=b+c;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
