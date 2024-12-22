#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc;
cin>>tc;
    vector<string>v(tc);
for(int i=0;i<tc;i++)
{
    cin>>v[i];
}
map<string,int>mp;
for(auto it:v)
{
    mp[it]++;
    if(mp[it]==1)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
 
 
 
    return 0;
}