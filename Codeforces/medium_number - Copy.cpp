#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int p=min(a,b);
        int q=min(p,c);
        int i=max(a,b);
        int j=max(i,c);
        if(a!=q && a!=j)
        cout<<a<<endl;
        else if(b!=q && b!=j)
        cout<<b<<endl;
        else cout<<c<<endl;
        
    }

    return 0;
}