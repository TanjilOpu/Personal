#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int r1,r2;
    vector<int>v(tc);
    for(int i=0; i<tc; i++)
    {
        cin>>v[i];
    }
    int mn1=1000,mn2=0;
    for(int i=0; i<tc; i++)
    {
        int p=i+1;
        if(i==tc-1)
        {
            p=0;
        }
        int d=abs(v[p]-v[i]);
        {
            if(mn1>d)
            {
                mn1=d;

                r1=p,r2=i;
            }
        }
    }
    cout<<r2+1<<"  "<<r1+1<<endl;
    return 0;
}
