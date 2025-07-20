#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int32_t main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        k--;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int max_h = *max_element(v.begin(), v.end());
        if (v[k] == max_h)
        {
            yes;
            continue;
        }

        int temp = v[k];
        sort(v.begin(), v.end());
        int pos = lower_bound(v.begin(),v.end(),temp)-v.begin();
        int current = v[pos];
        
        bool ans = true;

        int water_level = 0;
        for (int i = pos+1; i < n; i++)
        {
            // cout<<"current = "<<current<<endl;
            // cout<<"v [i] = "<<v[i]<<endl;
            if (v[i] <= temp)
            {
                continue;
            }
            else
            {
                int time_to_reach = v[i] - current;
                // cout<<"time = "<<time_to_reach<<endl;
                water_level += time_to_reach;
                // cout<<"w leve = "<<water_level<<endl;
                if (water_level > current)
                {
                    ans = false;
                    break;
                    
                }

                current = v[i];
                if (current == max_h)
                {
                    ans = true;
                    break;
                }
            }
        }
        if (ans)
            yes;
        else
            no;
    }
    return 0;
}
