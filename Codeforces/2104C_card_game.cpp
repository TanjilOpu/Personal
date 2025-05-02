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
    int n;
    cin >> n;
    n--;
    string s;
    cin >> s;
  //  cout<<"s = "<<s<<endl;
    int ans = 0;
    if (n == 1 && s == "AB")
    {
        cout << "Alice"<<endl;;
        //  cout << "a1" << endl;
        return;
    }
    else if (n == 1 && s == "BA")
    {
        cout << "Bob"<<endl;;
        return;
        //   cout << "b1" << endl;
    }
    else
    {
       // cout<<"s[0] = "<<s[0]<<endl;
        if (s[0] == 'A')
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] == 'B')
                {
                    ans = 0;
                    break;
                }
                else
                    ans = 1;
            }
            if (ans == 0)
            {
                if (s[n] == 'B')
                {
                    cout << "Bob" << endl;
                   // cout << "b2\n";
                    return;
                }
                else
                {
                   // cout<<"s[0] = "<<s[0]<<endl;

                    cout << "Alice" << endl;
                //   cout << "a2" << endl;
                    return;
                }
            }
            else
            {
               // cout<<"s[0] = "<<s[0]<<endl;

                cout << "Alice" << endl;
              //  cout << "a3" << endl;
                return;
            }
        }

       else if (s[0] == 'B')
        {
            if(s[n]=='A')
            {
                //cout<<"s[n] = "<<s[n]<<endl;
                ans=0;
            }
            else {
                cout<<"Bob"<<endl;
                return;
            }
            if(ans==0)
            {
                if(s[n-1]=='B')
                {
                    cout<<"Bob"<<endl;
                    return;
                }
                else{
                  // cout<<"s[0]jhgjhg = "<<s[0]<<endl;

                    cout<<"Alice"<<endl;
                    return;
                }
            }
            
            
            
            
            
        }
    }
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
