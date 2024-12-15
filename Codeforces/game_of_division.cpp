#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x % k);
        }
        int ans = 0,index;
        for(int i = 0;i<n;i++)
        {
            int freq = count(v.begin(),v.end(),v[i]);
            if(freq == 1 )
            {
                ans = 1;
                index = i+1;
                break;
            }
        }
        if(ans == 1)
        {
            cout<<"YES"<<endl;
            cout<<index<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }

    }  
}