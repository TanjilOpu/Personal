#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        vector<int>v(n);
        v[0]=x;
        v[n-1]=y;
        int p=1;
        for(int i=n-2; i>=1; i--)
        {
            int d = v[i+1]-p;
            p++;
            v[i]=d;

        }
        int d2=v[2]-v[1];
        int d1=v[1]-v[0];
        if(d1<=0 || d1==d2 ||  d1<d2)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<< " ";
            }
            cout<<endl;
        }

    }

    return 0;
}
