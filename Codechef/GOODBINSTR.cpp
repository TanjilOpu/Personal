
// link : https://www.codechef.com/problems/GOODBINSTR
#include <bits/stdc++.h>
using namespace std;
#define int long long int
// #define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    int cnt = 0;
    string s;
    cin >> s;
    int count_01 = 0, count_10 = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1' && s[i - 1] == '0')
        {
            count_01++;
        }
        if (s[i] == '0' && s[i - 1] == '1')
        {
            count_10++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        int tc10 = count_10;
        int tc01 = count_01;
        char org = s[i];
        char flip;
        if(org=='1') flip='0';
        else flip='1';

        if (i == 0)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                if (s[i + 1] == '1')
                {
                    tc01--;
                }
                else
                    tc10++;
            }

            else
            {
                s[i] = '0';
                if (s[i + 1] == '1')
                {
                    tc01++;
                }
                else
                    tc10--;
            }
        }
        else if (i == s.size()-1)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                if (s[i - 1] == '1')
                {
                    tc10--;
                }
                else
                    tc01++;
            }

            else
            {
                s[i] = '0';
                if (s[i + 1] == '1')
                {
                    tc10++;
                }
                else
                    tc01--;
            }
        }
        else {
            if(org=='1')
            {
                if(s[i-1]=='0') tc01--;
                if(s[i+1]=='0') tc10--;
                if(s[i-1]=='1') tc10++;
                if(s[i+1]=='1') tc01++;
            }

        }
        if(tc01==tc10)
        {
            cnt++;
        }
        s[i]=org;
    }
    cout << cnt << endl;
}

int32_t main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
