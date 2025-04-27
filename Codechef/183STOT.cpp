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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int cnt=0,pos=-1;
    vector<int>v;
    
     for(int i=0;i<n;i++)
     {
        if(s[i]!=t[i])
        {
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='1')
        {
            pos=i;
            break;
        }
     }
     if(pos==-1)
     {
        cout<<0<<endl;
        return;
     }
     for(int i=pos+1;i<n;i++)
     {
        if(s[i]!='1')
        {
            v.push_back(i-1);
            s[i]='1';
        }
     }
     for(int i=n-1;i>pos;i--)
     {
        if(s[i]!=t[i])
        {
            v.push_back(i-1);
        }
     }
     cout<<v.size()<<endl;
     for(auto it:v)
     {
        cout<<it+1<<" ";
     }
     cout<<endl;
   

}

int32_t main()
{
    fast();
    int t=1;
    cin >> t;
    while (t--)
        solve();
}
