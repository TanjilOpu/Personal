#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x,y,z;
    cin>>a>>b;
    n=3;
    if (a == b)
    {
        n=1;
        z=a;
        cout<<n<<endl;
        cout<<z<<endl;
        return 0;
    }
    x = a*3 -b;
    int l = x-b;
    int r= x-l;
    cout<<n<<endl;
    cout<<l<<" "<<b<<" "<<r<<endl;

}