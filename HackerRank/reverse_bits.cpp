#include<bits/stdc++.h>
#define ui unsigned int
#define ll long long int
using namespace std;
ui reversebit(ui n)
{                              // youtube channel neetcode 
    ui result  =0;
    for(int i =0;i<32;i++)
    {
        ui bit = (n>>i)&1;
        result = result | bit<<(31-i);
    }
    return result;
}
 
int main()
{
      ll tc; cin>>tc;
      vector<ui>v(tc);
    
      for(ll i=0;i<tc;i++)
      {
        ui n; cin>>n;
        ui n1 = reversebit(n);
        cout<<n1<<endl;
      }
 
 
 
    return 0;
}