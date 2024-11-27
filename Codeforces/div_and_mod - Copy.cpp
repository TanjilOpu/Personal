#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
        ll tc; cin>>tc; while(tc--)
        {
            ll l,r,a,s1,s2=1;
             cin>>l>>r>>a;
             ll result=r/a;
             ll rem = r%a;
             s1 = result+rem;
             ll lb=r-rem-1;
             if(result>=1 && lb>=l)
             {
                s2 = (result-1)+(a-1);
             }
             ll final = max(s1,s2);
             cout<<final<<endl;    
        }
    return 0;
}