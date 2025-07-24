// using difference array technique


// problem link :   https://codeforces.com/contest/296/problem/C
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES" <<endl
#define no cout << "NO" << endl
#define nn cout << endl
#define vc vector<int>
#define pb push_back
#define ppb pop_back
#define f0(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i <= n; i++)
#define srtall(a) sort(a.begin(), a.end())
#define rsrtall(a) sort(a.rbegin(), a.rend())
const int mod = 1e9 + 7;
#define PI acos(-1)
#define debug(x) cerr << (#x) << " " << (x) << endl
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int gcd(int a, int b)
 {
   if(b==0) return a;
   return gcd(b,a%b);
 }
 
bool prime(int n)
{
    if(n < 2) return false;
    if(n <= 3) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
 
void solve()
{
   int n,m,k;
   cin>>n>>m>>k;
   vc v(n);
   for(auto &it:v) cin>>it;
   vector<tuple<int,int,int>>ops(m);
   for(int i=0;i<m;i++)
   {
    int a,b,c;
    cin>>a>>b>>c;
    a--,b--;
    ops[i]={a,b,c};
   }

   vc operation_count(m+1,0);
   for(int i=0;i<k;i++)
   {
    int x,y;
    cin>>x>>y;
    x--,y--;
    operation_count[x]++;
    operation_count[y+1]--;
   }

   ///prefix sum array of operation count 
   for(int  i = 1;i<m;i++)
   {
    operation_count[i]+=operation_count[i-1];
   }

   // apply all operation using another diff_array
   vc diff_array(n+1,0);
    for(int i=0;i<m;i++)
    {
        int l = get<0>(ops[i]);
        int r = get<1>(ops[i]);
        int val = get<2>(ops[i]);
        int times = operation_count[i];
        diff_array[l]+=val*times;
        diff_array[r+1]-=val*times;
    }

    //prefix of diffenrence array 
    for(int i=1;i<n;i++)
    {
        diff_array[i]+=diff_array[i-1];
    }

    //after operation done final array
    for(int i=0;i<n;i++)
    {
        v[i]+=diff_array[i];
    }
    for(auto it:v)
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
