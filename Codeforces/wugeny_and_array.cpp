#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p=0,ng=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            p++;
        }
        else ng++;

    }
    int mini=min(p,ng);
    int l,r;
    while(m--)
    {
        cin>>l>>r;
        int d=r-l+1;
        if(d==1)
        {
            cout<<0<<endl;
        }
        else
        {
            if(d%2==0&&d<=mini*2)
            {
                cout<<1<<endl;
            }
            else cout<<0<<endl;

        }


    }
    return 0;
}
