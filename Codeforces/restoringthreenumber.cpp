#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,s,a,b,c;
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    sort(v.rbegin(),v.rend());
    s=v[0];
    x=v[1];
    y=v[2];
    z=v[3];
    a=s-x;
    b=s-y;
    c=s-z;
    cout<<a<<' '<<b<<' '<<c;


    return 0;
}