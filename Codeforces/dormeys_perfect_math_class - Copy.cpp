#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,gcdofn =0,x=0;
        cin>>n;
        for(int i=0 ;i<n;i++)
        {
            cin>>x;
            gcdofn = __gcd(gcdofn,x);
        }
        cout<<x/gcdofn<<endl;
    }

    return 0;
}