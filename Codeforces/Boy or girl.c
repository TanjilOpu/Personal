#include<stdio.h>
#include<string.h>
int main()
{
    int j,i,count=0,len;
    char str[100];
    gets(str);
   len = strlen(str);
    for(i=0;i<len;i++)
    {
        str[j]=str[i];
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j+1])
            {
                str[i]='0';
                count++;
            }
        }

    }
      printf("%d",count);
      puts(str);
    len=len-count;
    //printf("%d",len);
    if(len%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
