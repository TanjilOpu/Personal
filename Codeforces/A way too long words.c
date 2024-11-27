#include<stdio.h>
int main()
{
    int n ,len ;
     char str[101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&str);
        len =strlen(str);
        if(len<11)
            printf("%s\n",str);
        else
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
    }
return 0;
}
