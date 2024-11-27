#include<stdio.h>
int main()
{
    int n,sum=0,s;

    scanf("%d",&n);
    if(n>0)
    {
        s=n/5;
        sum=sum+s;
        n=n%5;

        s=n/4;
        sum=sum+s;
        n=n%4;

        s=n/3;
        sum=sum+s;
        n=n%3;

        s=n/2;
        sum=sum+s;
        n=n%2;

        s=n/1;
        sum=sum+s;
        n=n%1;
    }
    printf("%d",sum);

    return 0;
}
