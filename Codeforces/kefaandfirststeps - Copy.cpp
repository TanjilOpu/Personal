#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v;
    int fc=0;
    int c=0;
    int f=1;
    for(int i=0;i<t;i++)
{
    int in;
    cin>>in;
    v.push_back(in);
}
for(int i=0;i<t-1;i++)
{
    if(v[i]<=v[i+1])
    {
        f=0;
        if(f==0)
        {
            c++;
        }

       
        if(fc<c)
        {
            fc=c;
        }


    }
    else {
        c=0;
        f=1;
    }

}
cout<<fc+1<<endl;

    return 0;
}