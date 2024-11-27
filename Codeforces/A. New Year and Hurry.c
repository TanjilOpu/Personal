#include<stdio.h>
int main( )
{
    int i,n,k,rs,pns=5,count=0;
    scanf("%d%d",&n,&k);

    rs=240-k;


    for(i=1; i<=n; i++)
    {

        if(rs>=pns)

        {
            count++;
            int fipst=i*5;
            rs=rs-fipst;
            pns=(i+1)*5;
        }
    }
    printf("%d",count);
    return 0;
}
