#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long  coin=0,d=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                coin+=v[i-1]-v[i];
                v[i]=v[i-1];
            }
        }

        cout<<coin<<endl;
    }
    return 0;
}