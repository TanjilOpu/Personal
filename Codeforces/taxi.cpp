#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n; cin>>n;
     vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
            int f=0,c=0;

    for(int i=0;i<n;i++)
    {
        c+=v[i];
        if(c<=4)
        {
            
            f++;
        }
    }
    int r = n-f+1;
    cout<<r<<endl;
}