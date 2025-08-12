#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)
    {
        cin>>it;
    }
  int   check = v[0];
    for(int i=1;i<n;i++)
    {
        //cout<< "v[i] = "<<v[i]<<endl;
      //  cout<<"check = " << 2*check<<endl;
       if(v[i]>=(2*check))
       {
           cout<< "NO\n";
           return;
       }
       check = min(check,v[i]);

    }
    cout<< "YES\n";
}
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
