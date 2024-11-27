#include<stdio.h>
int main()
{
    int n,a,b,add;
    scanf("%d",&n);
    for (int i=0;i<n; i++)
    {
        add=0;
          scanf("%d %d",&a,&b);
        while(a%b!=0)
        {
            add++;
            a=a+1;
        }
        printf("%d\n",add);
    }
   return 0;
}
