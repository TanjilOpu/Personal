#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n;
    cin>>t;
    int arr1[t];
    int arr2[t];
    for(i=1;i<=t;i++)
    {
        cin>>arr1[i];
    }
    for(i=1;i<=t;i++)
    {
        arr2[arr1[i]]=i;
    }
    for(i=1;i<=t;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}