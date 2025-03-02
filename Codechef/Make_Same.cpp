#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    int cnt1=0,cnt0=0;
    int zero[3]={0,0,0};
    int one[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        if(a[i]=='0')
        {
            zero[0]++;
        }
        else one[0]++;
        if(b[i]=='0')
        {
            zero[1]++;
        }
        else one[1]++;
        if(c[i]=='0')
        {
            zero[2]++;
        }
        else one[2]++;
    }
    int tz=zero[0]+zero[1]+zero[2];
    int to=one[0]+one[1]+one[2];

    if(tz==0 || to==0)
    {
        cout<<0<<endl;
        return;
    }
    if(tz%n!=0 || to%n!=0)
    {
        cout<<-1<<endl;
        return;
    }
     if(to>tz)
     {
        cout<<n-max(zero[0],max(zero[1],zero[2]))<<endl;;
        return;
     }
     cout<<n-max(one[0],max(one[1],one[2]))<<endl;;



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