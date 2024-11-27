#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        if(m>n)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(n==m)
            {
                cout<< "Yes\n";
            }
            else if((n-m)%2==0)
            {
                cout<< "Yes\n";
            }
            else cout<< "No\n";
        }
    }

    return 0;
}
