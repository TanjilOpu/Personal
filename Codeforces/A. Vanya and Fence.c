#include<stdio.h>
int main()
{
    int p,mh,h,sum=0;
    scanf("%d%d",&p,&mh);
    for(int i=1;i<=p;i++)
    {
        scanf("%d",&h);
        if(h>mh)
            sum=sum+2;
        if(h<=mh)
            sum=sum+1;
    }
    printf("%d",sum);

    return 0;
}
