#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       int n;
       cin>>n;
       int p=10;
        vector<int>v;
       while (n)
       {
          int r =n%p;
          if(r>0)
          {
            v.push_back(r);
          }
          p=p*10;
          n=n-r;
       }
       int s=v.size();
       cout<<s<<endl;
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}