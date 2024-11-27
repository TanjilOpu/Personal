#include<stdio.h>
int main()
{
    int n,i,v1,v2,v3;
    int sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&v1,&v2,&v3);
            sum1=sum1+v1;
            sum2=sum2+v2;
            sum3=sum3+v3;
        }
        if(sum1==0&&sum2==0&&sum3==0)
            printf("YES\n");
        else
            printf("NO\n");


    return 0;
}
