#include<bits/stdc++.h>
#define ui unsigned int
using namespace std;
 
int main()
{
    // youtube vedio firmware chanel
  //  ios_base::sync_with_stdio(false);
    // cin.tie(NULL);                       // if test case is big then this two line will
                                                 // will make fast the code
    int tc;
    cin>>tc;
    vector<ui>v(tc);
    for(int i=0;i<tc;i++)
    {
        ui x;
        cin >> x;
        ui e = x & 0xAAAAAAAAA;
        ui o = x & 0x555555555;
        ui r = (e >> 1) | (o << 1);
        v[i]=r;
    }
    for(ui result :v)
    {
        cout<<result<<endl;
    }


 
 
    return 0;
}