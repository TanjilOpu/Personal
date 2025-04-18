#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
               s1+=arr[i][j];
            }
        }
    }
   int  j=n-1;
    for(int i=0;i<n;i++)
    {
       s2+=arr[i][j];
       j--;
    }
    int r=abs(s1-s2);
    
    cout<<r<<endl;
}