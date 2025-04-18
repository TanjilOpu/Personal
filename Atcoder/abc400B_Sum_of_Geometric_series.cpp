#include<bits/stdc++.h>
using namespace std;
const int mod=1e9;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int sum=1,res,f=1;
    
    for(long long int i=1;i<=m;i++)
    {
         f=f*n;
       // cout<<"f = "<<f<<endl;
        sum+=f;
        //cout<<"s = "<<sum<<endl;

        if(sum<=mod)
        {
            res=sum;
        }
        if(sum>mod)
        {
            cout<<"inf"<<endl;
            return 0 ;
        }

    }
    cout<<res<<endl;
}

