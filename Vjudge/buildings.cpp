#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int c = v[0];

   int ans  =-1 ;
    for(int i = 1;i<n;i++)
    {
        if(c<v[i])
        {
           ans  = i+1;
          cout<<ans<<endl;
          return 0 ;
        }
    }
    cout<<ans<<endl;;
   
}