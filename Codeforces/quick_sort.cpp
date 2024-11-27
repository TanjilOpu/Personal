#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int ans;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
            continue;
        }
        int  order = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==order+1)
            {
                order++;
            }
        }
        int unorder=n-order;
        int result = (unorder+k-1)/k;
        cout<<result<<endl;
    }
    return 0;
}
