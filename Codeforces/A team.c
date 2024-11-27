#include<stdio.h>
int main ()
{
    int  n,i,k ,p,v,t,count =0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        k=p+v+t;
        if(k>=2)
            count =count +1;
    }
    printf("%d",count);
    return  0;
}
