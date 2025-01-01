#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
   cin >> n >> m;
   if(n==m)
   {
      cout<<n<<endl;
      return 0;
   }
   if (n < m)
   {
      cout << -1 << endl;
      return 0;
   }
   int res=n/2;
   if(res%m==0 && n%2==0)
   {
      cout<<res<<endl;
   }
   else
   {
     for(int i=res+1;i<=n;i++)
     {
      int cmp=i-res;
          if(i%m==0 && cmp<=res)
          {
            cout<<i<<endl;
            return 0;
          }
     }
     cout<<-1<<endl;

   }
}
