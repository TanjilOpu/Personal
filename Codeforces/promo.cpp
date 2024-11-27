#include<bits/stdc++.h>
using namespace std;
#define it long long int
int main()
{
    it np,nq,i;
    cin>>np>>nq;
    it arr[np+1];
    for(i=1;i<=np;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+np+1);
    reverse(arr+1,arr+np+1);
    it ps[np+3];
 arr[0]=0;
 for(it i=1;i<=np;i++)
 {
    arr[i]=arr[i]+arr[i-1];
    //cout<<arr[i]<< " ";
 }
 while(nq--)
 {
    it bp,fp;
    cin>>bp>>fp;
    it r=arr[bp]-arr[bp-fp];
    cout<<r<<endl;
 }

    

    return 0;
}