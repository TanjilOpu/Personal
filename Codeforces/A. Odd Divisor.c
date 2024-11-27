#include<stdio.h>
int main()
{
    int t,i,count;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
         count=0;
        scanf("%lld",&n);
        for(i=1;i<=n/2;i++)
        {
          if(n%i==0)
          {
              if(i%2!=1)
              {
                  count++;
                  break;
              }
          }
        }
        if(count>0)
            printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
