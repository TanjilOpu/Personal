#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][n];
    char t[m][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>t[i][j];
        }
    }
}