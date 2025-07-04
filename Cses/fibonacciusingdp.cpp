#include<bits/stdc++.h>
using namespace std;
int dp[25];
int fibo(int n)
{
    // base case
    if(n==0) return 1;
    if(n==1) return 1;
    if(dp[n]!=-1) // dp part
    {
        return dp[n];
    }
    // function body
    int result =fibo(n-1)+fibo(n-2);
    dp[n]=result; //dp part
    return result;
}
int main()
{
   for(int i=0;i<25;i++)
   dp[i]=-1;
   cout<<fibo(5)<<endl;
}