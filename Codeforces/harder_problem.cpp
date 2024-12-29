#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1);
        vector<int>vis(n+1);
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(mp.find(v[i])==mp.end())
            {
              cout<<v[i]<<" ";
               mp[v[i]]++;
               vis[v[i]]=1;
            }
           

        }
        for(int i=1;i<=n;i++)
        {
          if(vis[i]==0)
          {
            cout<<i<<" ";
          }
        }
        cout<<"\n";
        
    }

 
 
 
    return 0;
}