#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>vp;
     for(int i=0;i<n;i++)
     {
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
     }
     sort(vp.begin(),vp.end());
    // for(auto it:vp)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    int sum = s;
    for(auto it:vp)
    {
        if(sum>it.first)
        {
          //  s-=it.first;
            sum+=it.second;
            // cout<<it.second<<endl;
        }
        else {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}