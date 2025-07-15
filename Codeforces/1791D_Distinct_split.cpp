#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int i, j;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>pre_distinct(n+1);
    vector<int>suf_distinct(n+1);
    suf_distinct[n]=0;
    pre_distinct[0]=1;
    map<char,int>mp;
    mp[s[0]]++;
    for(ll i=1;i<n;i++)
    {
        char ch =s[i];
        if(mp.find(ch)==mp.end())
        {
            mp[ch]++;
            pre_distinct[i]=pre_distinct[i-1]+1;
        }
        else pre_distinct[i]=pre_distinct[i-1];

        
    }
    suf_distinct[n-1]=1;
    map<char,int>mps;
    mps[s[n-1]]++;
    for(ll i=n-2;i>=0;i--)
    {
        char ch = s[i];
        if(mps.find(ch)==mps.end())
        {
            mps[ch]++;
            suf_distinct [i] =suf_distinct[i+1]+1;
        }
        else suf_distinct[i]=suf_distinct[i+1];
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ll currnent_ans = pre_distinct[i]+suf_distinct[i+1];
        ans = max(ans,currnent_ans);
    }
    //   for(auto it:pre_distinct)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    
    // for(auto it:suf_distinct)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    cout<<ans<<endl;
}
int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}