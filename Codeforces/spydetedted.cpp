#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,as,n;
    cin>>t;
    while(t--)
    {
        
        cin>>as;
        int arr[as];
        for(i=1;i<=as;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<=as;i++)
        {
            if(arr[i]!=arr[i+1] && arr[i]==arr[i+2])
            {
                cout<<(i+1)<<endl;
                break;
            }
            else if(arr[i]!=arr[i+1] && arr[i+1]==arr[i+2])
            {
                cout<<(i)<<endl;
                break;
            }
            else if(arr[i]==arr[i+1]&&arr[i]!=arr[i+2])
            {
              cout<<(i+2)<<endl;
              break;
            }
            else if(arr[i]!=arr[as])
            {
                cout<<as<<endl;
                break;
            }
        }
    }

    return 0;
}