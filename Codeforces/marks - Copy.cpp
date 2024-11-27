#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int cnt=0;
    cin>>n>>m;
    char a[n][m],ch[n],maxi;
    int s[n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
        s[i]=0;
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            ch[j]=a[j][i];
        }
        sort(ch,ch+n);
        maxi=ch[n-1];
        for(int j=0; j<n; j++)
        {
            if(a[j][i]==maxi)
            {
                s[j]++;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(s[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
