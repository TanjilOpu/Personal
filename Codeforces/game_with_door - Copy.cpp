#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int l,r,L,R,ans;
        cin>>l>>r;
        cin>>L>>R;
        int intersect = min(r,R)-max(l,L)+1;
        ans =intersect-1;
        if(intersect<=0)
        {
            ans=1;
        }
        else 
        {
            if(l!=L) ans++;
            if(r!=R) ans++;
        }
        cout<<ans<<endl;
    }
}