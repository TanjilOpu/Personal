#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n;
        cin>>n;
        if(n>10)
        {
            cout<<10<<" "<<n-10;
        }
        else cout<<n<<" "<<0;
        cout<<endl;
    }
    
    return 0;
}