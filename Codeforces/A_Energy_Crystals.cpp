#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)

    {
        int n;
        cin>>n;
        int ans = 0;
        while(n>0)
        {
            n=n/2;
            ans+=2;
        }
        cout<<ans+1<<endl;
    }
}