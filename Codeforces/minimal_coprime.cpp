#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll l,r,ans;
        cin>>l>>r;
        if(r==1) 
        {
            ans=1;
        }
        else{
            ans = r-l;
        }
        cout<<ans<<endl;
    }

}
