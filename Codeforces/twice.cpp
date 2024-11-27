#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(v[i]==v[j]&& v[i]>0)
                {
                    ans++;
                    v[i]=0;
                    v[j]=0;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}