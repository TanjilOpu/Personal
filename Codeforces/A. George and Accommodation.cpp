#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y-x>=2)
        {
            c++;
        }


    }
    cout<<c<<endl;

    return 0;
}
