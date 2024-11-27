#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int
int main()
{
    ll tc,sh,sm,am,ah,n,ans;
    
    cin>>tc;
    while(tc--)
    {
        ans=INT_MAX;
        cin>>n>>sh>>sm;
        ll t1 = 60*sh+sm;

        for(int i=0;i<n;i++)
        {
            cin>>ah>>am;
            ll  t = ((ah*60)+am)-t1;
            if(t<0)
            {
                t= t+24*60;
            }
            ans =min(t,ans);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
    return 0;
}
