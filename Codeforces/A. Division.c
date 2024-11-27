#include<stdio.h>
int main( )

{
    int t,r;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&r);
        if(r>=1900)
        {
            printf("For Division 1\n");
        }
        else if(r<=1899&&r>=1600)
        {
            printf("For Division 2\n");
        }
        else if(r<=1599&&r>=1400)
        {
            printf("For Division 3\n");
        }
        else if(r<=1399)
        {
            printf("For Division 4\n");
        }

    }

    return 0;
}
