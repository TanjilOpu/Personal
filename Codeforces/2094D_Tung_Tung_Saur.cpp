#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES"<<endl
#define no cout << "NO"<<endl
#define nn cout << endl
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define all(a) sort(a.begin(),a.end())
#define rall(a) sort(a.rbegin(),a.rend())
const int mod = 1e9 + 7;
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

void solve()
{
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        yes;
        return;
    }
    int as=a.size();
    int bs=b.size();
    if(as>bs || as*2<bs || a[0]!=b[0])
    {
        //cout<<" c1"<<endl;
        no;
        return;
    }
    vector<int>va;
    vector<int>vb;
    int cnt=1;
    for(int i=1;i<as;i++)
    {
        if(a[i]!=a[i-1])
        {
            va.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    va.push_back(cnt);
    cnt=1;
    for(int i=1;i<bs;i++)
    {
        if(b[i]!=b[i-1])
        {
            vb.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    vb.push_back(cnt);
    if(va.size()!=vb.size())
    {
        no;
        return;
    }
    int sz=va.size();
    for(int i=0;i<sz;i++)
    {
        if(va[i]>vb[i] || va[i]*2<vb[i])
        {
            no;
            return;
        }
    }
    yes;
   
}

int32_t main()
{
    fast();
    int t=1;
    cin >> t;
    while (t--)
        solve();
}
