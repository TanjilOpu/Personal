#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1) cout<<-1<<endl;
    else
    {
        if(n>1 && n%2==1)
        {
            cout<<-1<<endl;
        }
        else if(n>1 && n%2==0)
        {
            int o2=2;
            int o1=1;
            for(int i=1; i<=n; i++)
            {
                if(i%2==1)
                {
                    cout<<o2<<" ";
                    o2=o2+2;
                }
                else
                {
                    cout<<o1<<" ";
                    o1=o1+2;
                }
            }
            cout<<endl;
        }

    }
    return 0;
}
