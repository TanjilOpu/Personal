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
    vector<int>v;
    if(n==1) {
        cout<<-1<<endl;
        return;
    }
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            v.push_back(1);
            v.push_back(-1);
        }
       // cout<<endl;
    }
    else{
         
            v.push_back(1);
            v.push_back(2);
            v.push_back(-3);
            n=n-3;
            for(int i=1;i<=n/2;i++)
            {
                v.push_back(1);
                v.push_back(-1);
            }

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
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
