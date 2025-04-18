#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target=n+1;
    for(int i=0;i<n;i++)
    {
        cout<<target-arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{ 
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }

    return 0;
}