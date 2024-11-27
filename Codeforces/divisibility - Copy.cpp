#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b;
    int r,c,d,e;
    while(t--)
    {
cin>>a>>b;
r=a%b;
if(r==0)
{
    cout<<r<<endl;
}
else if(r>0)
{
c=a/b;
d=c+1;
e=d*b;
r=e-a;
cout<<r<<endl;


}
    }
    return 0;
}
