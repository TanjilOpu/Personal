#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,x;
    vector<int>v;
    for(int i=0;i<3;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    sum=(v[0]-v[1])+(v[1]-v[2]);
    cout<<sum<<endl;
    return 0;
}
