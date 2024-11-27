#include<bits/stdc++.h>
using namespace std;
int main()
{int t,l1,r1,l2,r2;
cin>>t;
while (t--)
{
    cin>>l1>>r1>>l2>>r2;
    if(l2>=3)
    {cout<<l2<<endl;}
    else if(l2<3)
    cout<<(l1+l2)<<endl;
}

    return 0;
}
