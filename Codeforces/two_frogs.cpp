#include<bits/stdc++.h>
using namespace std;
int main()
{               //just consider the dominence
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int r=abs(a-b);
        if(r%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}