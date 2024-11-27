#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll m=0;
        ll l,r,a;
        cin>>l>>r>>a;
        for(ll i=l;i<=r;i++)
        {
            int res=(i/a)+(i%a);
            //cout<<"res = "<<res<<endl;
            if(res>m)
            {
                m=res;
            }
        }
        cout<<m<<endl;
    }
    

    return 0;
}