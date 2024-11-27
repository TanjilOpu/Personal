#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,tc=0,cont=0,sum=0;
    cin>>t;
    vector<int>v;
   for(i=0;i<t;i++)
   {
      cin>>n;
       v.push_back(n);
       tc=tc+n;
   }
    tc=tc/2;
    sort(v.rbegin(),v.rend());
    for(i=0;i<t;i++)
    {
        sum=sum+v[i];
        cont++;
        if(sum>tc)
        {
        printf("%d\n",cont);
            break;
        }

    }
    return 0;
}