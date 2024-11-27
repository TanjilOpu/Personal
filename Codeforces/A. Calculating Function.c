#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum =sum+pow(-1,i)*i;

    }
    printf("%d\n",sum);

    return 0;
}
