#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc ;cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int r=n%10;
        n=n/10;
        cout<<n+r<<endl;
    }
    return 0;
}