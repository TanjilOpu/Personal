#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    int f=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            f++;

        }     
    }
    f=f+1;
      cout<<f<<endl;
    return 0;
}