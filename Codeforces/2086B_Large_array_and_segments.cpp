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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int looop_need = x/sum;
    if(x%sum!=0)
    {
        looop_need++;
    }
    if(looop_need>k)
    {
        cout<<0<<endl;
        return;
    }
    int summ=sum*looop_need;
    int take=0;
    for(int i=0;i<n;i++){
        if(summ<x)
        {
            break;
        }
        else {
            summ-=v[i];
            take++;
        }
    }
    int r=(n*k)-(looop_need*n)+take;
    cout<<r<<endl;
    
      
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
