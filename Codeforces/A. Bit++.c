#include<stdio.h>
#include<string.h>
int main( )
{
    int n,i,x=0,j;
    char str[5];
    scanf("%d",&n);
    while(n--)
    {
       //scanf("%d",&x);

        scanf("%s",str);
        for(j=0;j<3;j++)
        {
            if(str[j]=='+'&&str[j+1]=='+')
            {
                x++;
            }
            else if(str[j]=='-'&&str[j+1]=='-')
                x--;
        }}

            printf("%d\n",x);

    return 0;
}
