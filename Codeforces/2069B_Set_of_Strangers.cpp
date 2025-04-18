#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int r,c;
    cin>>r>>c; map<int,int>mp;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
            mp[arr[i][j]]=1;
        }
    }
    int jora=0;
   

    for(int i=0;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            if(arr[i][j]==arr[i][j-1])
            {
                mp[arr[i][j]]=2;
            }
        }
    }
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==arr[i-1][j])
            {
                mp[arr[i][j]]=2;
            }
        }
    }
    // for(auto it:mp)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    int ans=0,mxfre=0;
    for(auto it:mp)
    {
       
            ans+=it.second;
            mxfre=max(mxfre,it.second);
        
        // else {
        //     ans++;
        // }4
    }
    cout<<ans-mxfre<<endl;
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