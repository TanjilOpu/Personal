#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll cs=1;
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        string s;
        cin>>n>>s;
        if(s[0]=='A')
        {
            if(n%3==0)
            {
                printf("Case %d: Bob\n",cs);
            }
            else printf("Case %d: Alice\n",cs);
        }
        else
        {
            if(n%3==0)
            {
                printf("Case %d: Alice\n",cs);
            }
            else printf("Case %d:  Bob\n",cs);
        }
        cs++;
    }
    return 0;
}
