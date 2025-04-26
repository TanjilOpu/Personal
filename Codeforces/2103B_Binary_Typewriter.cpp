#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=-1,l=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            f=i;
            break;
        }
    }
    for(int i=f;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]=='1')
        {
            l=i;
            break;
        }
    }
    if(l==-1)
    {
        l=n-1;
    }
    string ts,ts1;
    for(int i=0;i<f;i++)
    {
        ts+=s[i];
    }
    for(int i=l;i>=f;i--)
    {
        ts+=s[i];
    }
    for(int i=l+1;i<n;i++)
    {
        ts+=s[i];
    }
    // cout<<ts<<endl;
    int ans = 1;
    if(ts[0]=='1') ans++;
    int cnt=0;
    for(int i=1;i<n;i++)
    {
     
        if(ts[i]==ts[i-1])
        {
            ans++;
            cnt++;
        }
        else{
            ans+=2;
            cnt++;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
}
