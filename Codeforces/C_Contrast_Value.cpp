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
vc v;
bool greater_peak(int i)
{
        if(v[i-1]<v[i] && v[i]> v[i+1]) return 1;
        else return 0;
}
bool lower_peak(int i)
{
        if(v[i-1]>v[i] && v[i]< v[i+1]) return 1;
        else return 0;
}
 
void solve()
{
   int n;
   cin>>n;
   v.resize(n);
  
   f0(n) cin>>v[i];
   auto it = unique(v.begin(),v.end());
   v.erase(it,v.end());

//    f0(v.size())
//    {
//     debug(v[i]);
//    }

   int ans=0;

   f0(v.size())
   {
     if(i==0 || i == v.size() - 1) ans++;
     else if(greater_peak(i)) ans++;
     else if(lower_peak(i)) ans++;
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