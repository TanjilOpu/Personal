#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tv,bcc,r=0;
    cin>>tv>>bcc;
    vector<int>v(tv);
    for(int i=0;i<tv;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<bcc;i++)
    {
        if(v[i]<=0)
        {
            r=r+v[i];

        }
    }
    cout<<abs(r)<<endl;


    return 0;
}