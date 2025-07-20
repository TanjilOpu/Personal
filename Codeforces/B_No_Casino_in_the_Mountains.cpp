// problem link :   
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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i = 0;i<n;i++)
   {
    cin>>v[i];
   }

   int ans= 0;
   int countzero=0;
   for(int i=0;i<n;i++)
   {
    if(v[i]==0)
    {
        countzero++;
        if(countzero==k)
        {
            ans++;
            i++;
            countzero =0;
        }
        
        
    }
    else if(v[i]==1)
    {
        countzero = 0;
    }
   }
   cout<<ans<<endl;

}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}