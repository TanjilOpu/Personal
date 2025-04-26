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
    int n,x;
      cin>>n>>x;
      vector<int>va(n);
      vector<int>vb(n);
      for(int i=0;i<n;i++)
      {
        cin>>va[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>vb[i];
      }
      int deis;
      int cnt=0;
      vector<int>v;
      for(int i=0;i<n;i++)
      {
        if(va[i]>=0 && vb[i]>=0)
        {
            int su=va[i]+vb[i];
            if(cnt==0)
            {
                deis=su;
                cnt++;
            }
            else if(deis!=su)
            {
                cout<<0<<endl;
                return;
            }
            
 
        }
        if(vb[i]==-1)
            {
                int p=va[i];
               // cout<<"p = "<<p<<endl;
                v.push_back(p);
            }
      }
      //cout<<"vsize = "<<v.size();
      if(v.size()==n)
      {
        int mini= *min_element(v.begin(), v.end());
        int maxi = *max_element(v.begin(), v.end());
        int r=mini+x;
        r=r-maxi+1;
        //cout<<"r= "<<r<<endl;
        cout<<r<<endl;
        return;
      }
      else {
        int f=1;
        for(int i=0;i<v.size();i++)
        {
             int ned = deis-v[i];
             if(ned>x || ned<0)
             {
                cout<<0<<endl;
                return;
             }
        }
        cout<<1<<endl;
      }

}

int32_t main()
{
    fast();
    int t=1;
    cin >> t;
    while (t--)
        solve();
}
