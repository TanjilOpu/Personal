#include<bits/stdc++.h>
using namespace std;
int main()
{

int tc;
cin>>tc;
while(tc--)
{
    long long int n,f=0;
    cin>>n;
    if(n%2==1)
    {
        cout<<"Yes\n";
    }
    if(n%2==0)
    {
        while(n%2==0)
        {
            n=n/2;
        }
        if(n>2)
        cout<<"Yes\n";
        else cout<<"No\n";
    }
    
}
    return 0;
}