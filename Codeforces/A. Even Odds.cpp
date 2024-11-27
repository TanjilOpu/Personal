#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    vector<int>arr;

    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            arr.push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            arr.push_back(i);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
