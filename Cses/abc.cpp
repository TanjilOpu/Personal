#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<=n-2;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<=n-2;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}