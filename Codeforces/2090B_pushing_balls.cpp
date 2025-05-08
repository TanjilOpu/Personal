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
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            int cnti=0,cntj=0;
            if (arr[i][j] == '1')
            {
            //     cout<<"i  i ="<<i<<endl;
            //    cout<<"j  j ="<<j<<endl;
                int ci=i-1;
                int cj=j-1;
                while(ci>=0)
                {
                    // cout<<"arr[ci][j] ="<<arr[ci][j]<<endl;
                    if(arr[ci][j]=='1')
                    {
                        cnti++;
                    }
                   ci--;

                }
                while(cj>=0)
                {    
                    //   cout<<"arr[i][cj] ="<<arr[i][cj]<<endl;

                    if(arr[i][cj]=='1')
                    {
                        cntj++;
                    }
                    cj--;

                }
                // cout<<"cnti = "<<cnti<<endl;
                // cout<<"cntj = "<<cntj<<endl;
                if(cnti==i || cntj==j)
                {
                    continue;
                }
                else {
                    no;
                    return;
                }
            }
        }
    }

    yes;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
