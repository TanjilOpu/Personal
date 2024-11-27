#include<bits/stdc++.h>
using namespace std;
int main()
{
    int gl;
    cin>>gl;
    set<int>s;
    int x,y,in;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>in;
        s.insert(in);
    }
      cin>>y;
    for(int j=0;j<y;j++)
    {
        cin>>in;
        s.insert(in);
    }
    int r=s.size();
    if(r==gl)
    {
        cout<<"I become the guy.\n";
    }
    else 
    cout<<"Oh, my keyboard!\n";


    return 0;
}