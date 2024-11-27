#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
       // reverse(v.begin(),v.end());
       ll sum=v[0];
        for(int  i=1;i<n;i++)
        {
           // cout<<v[i];
            sum=round((sum+v[i])/2);
            //cout<<"sum = "<<sum<<endl;
        }
       
        cout<<sum<<endl;
    }
    return 0;
}