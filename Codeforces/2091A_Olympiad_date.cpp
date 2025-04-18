#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,cnt0=0,cnt1=0,cnt2=0,cnt3=0,cnt5=0;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) cnt0++;
        if(v[i]==1) cnt1++;
        if(v[i]==2) cnt2++;
        if(v[i]==3) cnt3++;
        if(v[i]==5) cnt5++;

        if(cnt0>=3 && cnt1>=1 && cnt2>=2 && cnt3>=1 && cnt5>=1)
        {
            cout<<i+1<<endl;
            return;
        }

    }
    // cout<<mp[0]<<endl;
    // cout<<mp[1]<<endl;
    // cout<<mp[2]<<endl;
    // cout<<mp[3]<<endl;
    // cout<<mp[5]<<endl;

    // return;
    cout<<0<<endl;
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