#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;

    for(int c=0;c<n;c++)
    {
        int i=0,j=c,mn=0;
        while(i<n && j<n)
        {
            if(arr[i][j]<0)
            {
                mn=min(mn,arr[i][j]);
            }
            i++,j++;
        }
        sum+=abs(mn);
    }

    for(int r=1;r<n;r++)
    {
        int i=r,j=0,mn=0;
        while(i<n && j<n)
        {
            if(arr[i][j]<0)
            {
                mn=min(mn,arr[i][j]);
            }
            i++,j++;
        }
        sum+=abs(mn);
    }
    cout<<sum<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}