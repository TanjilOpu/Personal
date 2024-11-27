#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll max=0,min=0;
        ll n;
        cin>>n;
        if(n%2==1 || n<4)
        {
            cout<<-1<<endl;
        }
        else 
        {
            if(n==4 || n==6)
            {
                cout<<1<<" "<<1<<endl;
            }
            else 
            {
                if(n%6==0)
                {
                 min=n/6;

                }
                else 
                {
                    int r=n%6;
                    min=(n/6)+1;
                }
                 max=n/4;
                         cout<<min<<" "<<max<<endl;

            }
        }
    }

    return 0;
}