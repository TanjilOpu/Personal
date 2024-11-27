#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int c=n/4;
        int r=n%4;
        if(r==2)
        {
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
