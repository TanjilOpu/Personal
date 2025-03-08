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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int uc=0,s=0;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                uc++;
            }
            else s++;

        }
       // cout<<"uc = "<<uc<<endl;
        int sz=mp.size()-uc;
       // cout<<"sz = "<<sz<<endl;
        if(uc%2==1)
        {
            uc++;
        }
        int ans=2*uc/2+sz;
        cout<<ans<<endl;
    }
        
    }
   