#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int mat[n][n];

    for(int i=1;i<=n;i++)
    {
        int p=k;
        for(int j=1;j<=n;j++)
        {
           if(j==i)
           {
               cout<<p;
           }
           else cout<<0;
           if(j==n)
           {
               cout<<endl;
           }
           else cout<<" ";
        }
    }


    return 0;
}
