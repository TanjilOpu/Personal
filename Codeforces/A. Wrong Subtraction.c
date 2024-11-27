#include<stdio.h>
int main( )
{
    int n,ts,r,rem;
    scanf("%d%d",&n,&ts);
    for(int i=1;i<=ts;i++)
    {
        if(n%10==0)
        {
            n=n/10;
        }
        else
            n=n-1;

    }
    printf("%d\n",n);
    return 0;
}
