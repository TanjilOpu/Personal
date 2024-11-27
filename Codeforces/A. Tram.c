#include<stdio.h>
int main()
{
    int n,ip,op,lp=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&op,&ip);
        sum=sum+(ip-op);
        if(sum>lp)
            lp=sum;
    }
    printf("%d",lp);
    return 0;
}
