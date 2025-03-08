#include<bits/stdc++.h>
using namespace std;
void solve()
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
    vector<int>dupli;
    for(auto it:mp)
    {
        if(it.second>=2)
        {
            dupli.push_back(it.first);
        }
        if(it.second>=4)
        {
            cout<<it.first<<" ";
            cout<<it.first<<" ";
            cout<<it.first<<" ";
            cout<<it.first<<endl;
            return;
        }
    }
    int sz=dupli.size();
   // cout<<"ys1\n";
    if(sz==0)
    {
        cout<<-1<<endl;
        return;
    }
   else if(sz>=2)
    {
        cout<<dupli[0]<<" ";
        cout<<dupli[0]<<" ";
        cout<<dupli[1]<<" ";
        cout<<dupli[1]<<endl;
        return;
    }
    else
    {
       // cout<<"ys2\n";
        int x=dupli[0];
        sort(v.begin(),v.end());
        auto it = find(v.begin(),v.end(),x);
        int index=it-v.begin();
        //cout<<index<<endl;
        v.erase(v.begin()+index,v.begin()+index+2);
        // for(auto it:v)
        // {
        //     cout<<it<<" ";
        // }
       // cout<<endl;
        int siz=v.size();
        for(int i=1;i<siz;i++)
        {
            int d=v[i]-v[i-1];
            if((dupli[0]*2)>d)
            {
                cout<<x<<" ";
                cout<<x<<" ";
                cout<<v[i-1]<<" ";
                cout<<v[i]<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}