#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,ni,n,i,s;
cin>>t;
while(t--)
{
    vector<int>v;
    s=1;
    cin>>ni;
    for(i=0;i<ni;i++)
    {
        cin>>n;
        v.push_back(n);

    }
    sort(v.begin(),v.end());
    v[0]=v[0]+1;
   // cout<<v[0]<<endl;

    for(i=0;i<ni;i++)
    {
        s=s*v[i];

    }
    cout<<s<<endl;
    
    s=0;

}

    return 0;
}