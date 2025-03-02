#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int zero=0,dupli=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(x==0) zero=1;
        if(mp[x]>1) dupli=1;
    }
    if(zero==0 && dupli == 0)
    {
        cout<<n<<endl;
        return;
    }
    int sum=0;
    for(auto it:mp)
    {
        if(it.first>0)
        sum+=it.second%2;
    }
   // cout<<zero<<endl<<endl;
    cout<<sum+1<<endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}