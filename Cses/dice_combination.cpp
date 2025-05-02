#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int vis[1000000],dp[1000000];
int solve(int n)
{  
    if(n==0)
    {
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    int cnt=0;
   
     for(int i=1;i<=6;i++)
     {
        if(n>=i)
        {
            cnt+=solve(n-i);
            cnt%=mod;
        }
     }
    // vis[n]=1;
     dp[n]=cnt;
     return cnt;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<solve( n)<<endl;
}