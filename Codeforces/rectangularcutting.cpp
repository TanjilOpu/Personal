#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%2!=0 && b%2!=0)
        cout<<"No\n";
        else if(a%2==0 && b%2==0)
        cout<<"Yes\n";
        else if(a%2==0)
        {
            a=a/2;
            if(a==b)
            {
                cout<<"No\n";
            }
            else 
            cout<<"Yes\n";
            
        }
        else if(b%2==0)
            {
                b=b/2;
                if(b==a)
                cout<<"No\n";
                else cout<<"Yes\n";
            }
    }


    return 0;
}