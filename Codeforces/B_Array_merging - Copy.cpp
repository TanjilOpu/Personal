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
   int n;
   cin>>n;
   vc a(n),b(n);
   for(auto &it:a) cin>>it;
   for(auto &it:b) cin>>it;
   map<int,int>mpa;
   map<int,int>mpb;
   int pre = a[0];
   int cnt =1;
   for(int i=1;i<n;i++)
   {
      if(a[i]==pre)
      {
        cnt++;
      }
      else {
        mpa[pre]=max(mpa[pre],cnt);
        cnt=1;
        pre=a[i];
      }
   }
   mpa[pre]=max(mpa[pre],cnt);

// for(auto it:mpa)
//    {
//       cout<<it.first<<" "<<it.second<<endl;
//    }

   int preb = b[0];
    cnt =1;
   for(int i=1;i<n;i++)
   {
      if(b[i]==preb)
      {
        cnt++;
      }
      else {
        mpb[preb]=max(mpb[preb],cnt);
        cnt=1;
        preb=b[i];
      }
   }
   mpb[preb]=max(mpb[preb],cnt);
//    for(auto it:mpb)
//    {
//       cout<<it.first<<" "<<it.second<<endl;
//    }

   int ans = 0;
   for(int i=0;i<=2*n;i++)
   {
    // debug(i);
    // debug(mpa[i]);
    // debug(mpb[i]);
    ans = max(mpa[i]+mpb[i],ans);
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