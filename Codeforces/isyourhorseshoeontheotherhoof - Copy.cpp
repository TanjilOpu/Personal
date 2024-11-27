#include<bits/stdc++.h>
using namespace std;
int main()
{
   int r,a,b,c,d;
   cin>>a>>b>>c>>d;
   set<int>s={a,b,c,d};
   r=4-s.size();
   cout<<r<<endl;
    return 0;
}