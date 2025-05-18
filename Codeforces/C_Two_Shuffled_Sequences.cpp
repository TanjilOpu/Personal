// problem link :   https://codeforces.com/problemset/problem/1144/C
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nn cout << endl
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define all(a) sort(a.begin(), a.end())
#define rall(a) sort(a.rbegin(), a.rend())
const int mod = 1e9 + 7;
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    vc v(n);
    f0(n) {
        cin>>v[i];
        mp[v[i]]++;
    }  
    all(v);
    int mx=v[n-1];
    int mn=v[0];
    for(auto it:mp)
    {
        if(it.second>2)
        {
            no;
            return;
        }
    }
    set<int>st;
    vc dec;
    for(int i=0;i<v.size();i++)
    {
       if(st.count(v[i])==0)
       {
        st.insert(v[i]);
       }
       else dec.push_back(v[i]);
    }
    rall(dec);
    yes;
    cout<<st.size()<<endl;
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<dec.size()<<endl;
    for(auto it:dec)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}

int32_t main()
{
    fast();
    int t = 1;
   // cin >> t;
    while (t--)
        solve();
}