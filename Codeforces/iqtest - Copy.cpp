#include<bits/stdc++.h>
using namespace std;
int main()
{
int in,oc=0,ec=0;
cin>>in;
int a[in+2];
for(int i=0;i<in;i++)
{
    cin>>a[i];
}
for(int i=0;i<in;i++)
{
    if(a[i]%2==0)
    {
        ec++;
    }
    else oc++;
}
if(ec>oc)
{
    for(int i=0;i<in;i++)
    {
        if(a[i]%2==1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
else if(ec<oc)
{
    for(int i=0;i<in;i++)
    {
        if(a[i]%2==0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
cout<<endl;
}