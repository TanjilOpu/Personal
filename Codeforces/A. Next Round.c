#include<stdio.h>
int main()
{
    int k,n,i,j;
    scanf("%d%d",&k,&n);
    int arr[k];
    int count=0;
    for(i=1;i<=k;i++)
    {
        scanf("%d",&arr[i]);

    }
     for(i=1;i<=k;i++)
    {
       if(arr[i]>=arr[n]&&arr[i]!=0)
       {
           count++;
       }
    }
    printf("%d",count);
    return 0;
}
