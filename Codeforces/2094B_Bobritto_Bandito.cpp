#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,l,r,lp=0;
    cin>>n>>m>>l>>r;
    int rp=m;
    if(rp>r)
    {
        lp=r-rp;
        rp=r;
    }
    cout<<lp<<" "<<rp<<endl;


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