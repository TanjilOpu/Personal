#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int as;
        cin>>as;
        vector<int>v(as);
        for(int i=0;i<as;i++)
        {
            cin>>v[i];
            if(v[i]==1) v[i]=v[i]+1;
        }
        for(int i=1;i<as;i++)
        {
            if(v[i]%v[i-1]==0) v[i]=v[i]+1;
        }
        for(int i=0;i<as;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}