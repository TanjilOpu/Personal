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
void ans(int t)
{
    for(int i=4;i<t*2;i++)
    {
        

    }
}

 void solve()
{
    int n;
    cin>>n;
    vc v(n);
    int sum=0;
    f0(n) {
        cin>>v[i];
        sum+=v[i];
    }
    rall(v);
    // vector<int>t;
    
    int i=0;
    int t=pow(2,i);
  //  cout<<"t = "<<t<<endl;
    int cnt=0;
    int c=0;

     while(v.size()!=0 && cnt<=sum+1)
     {
        c=0;
        cnt++;
        int sz=v.size();
         c=v[v.size()-1];
       // cout<<"c = c = "<<c<<endl;
        if(c>t)
        {
            // cout<<"t = "<<t<<endl;
            // cout<<"c = "<<c<<endl;
            // cout<<"cnt = "<<cnt<<endl;
           // cout<<t<<endl;
          // cout<<t<<endl;
          ans(t);
            return ;
        }
        else if(c==t)
        {
            i++;
         //   cout<<"i = "<<i<<endl;
            t=pow(2,i);
           // cout<<"tt = "<<t<<endl;
            v.pop_back();
            
        }
        else{
            c=0;
            while(c<=t)
            {
                c+=v[v.size()-1];
                v.pop_back();
                if(c==t)
                {
                    i++;
                    t=pow(2,i);
                    break;
                }

            }
        }
        

     }
   
 
   
    

    
}

int32_t main()
{
    fast();
    int t=1;
    //cin >> t;
    while (t--)
        solve();
}
