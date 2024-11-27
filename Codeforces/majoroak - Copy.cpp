#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
       int n,k,s;
       cin>>n>>k;
       s=k*(2*n-k+1)/2;
       if(s%2==0) cout<< "YES"<<endl;
       else cout<< "NO"<<endl;
    }

    return 0;
}
