#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int arr[t+2];
int maxnum=0,maxnumin,minnum=100,minnumin,r;
for(int i=0;i<t;i++)
{
    cin>>arr[i];
    if(arr[i]>maxnum)
    {
        maxnum=arr[i];
        maxnumin=i;
    }
    if(arr[i]<=minnum)
    {
        minnum=arr[i];
        minnumin=i;
    }
}
 if(maxnumin>minnumin)
    {
        minnumin++;
    }
    r=maxnumin+(t-1)-minnumin;
    cout<<r<<endl;

    return 0;
}