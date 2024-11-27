#include<stdio.h>
int main()
{
    int arr[1000000000];
    int t,i,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<t;i++)
    {
        printf("%d",arr[i]);
    }


    return 0;
}