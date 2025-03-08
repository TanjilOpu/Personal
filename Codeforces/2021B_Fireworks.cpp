#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll tc;
  cin>>tc;
  while(tc--)
  {
    ll a,b,m;
    cin>>a>>b>>m;
 //   m++;
    ll ans = m/a + m/b + 2;
    cout<<ans<<endl;
  }

    return 0;
}