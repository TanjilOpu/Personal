#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%2!=0&&b%2!=0)
            cout<<"No\n";
        else if(a%2==0)
        {
            int ta=a/2;
            int tb=b+b;
            if(tb==a)
                cout<<"No\n";
            else cout<<"Yes\n";
        }
           else if(b%2==0)
        {
            int ta=b/2;
            int tb=a+a;
            if(tb==b)
                cout<<"No\n";
            else cout<<"Yes\n";
        }
    }

    return 0;
}
