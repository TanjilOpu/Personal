#include<bits/stdc++.h>

using namespace std;
#define ll long long int 
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        }

        else if(n%2==0)
        {
            for(int i=1;i<=n-2;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<"1 3"<<endl;
        }

    }
    
    return 0;
}