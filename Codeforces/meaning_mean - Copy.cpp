#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int>v1;
        v1[0]=v[1];
        int l=n-2
        while(l--)
        for(int i=2;i<n;i++)
        {
                int a = (v[i]+v[i+1])/2;
                v1.push_back(a);
        }
    }

    return 0;
}