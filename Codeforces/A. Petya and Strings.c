#include<stdio.h>
#include<string.h>
int main( )
{
    int i,j;
    char s1[100],s2[100];
       getchar();
    gets(s1);
    strupr(s1);
    getchar();
    gets(s2);

          strupr(s2);
          if(s1==s2)
            printf("0\n");
   else
          for(int i=0;i<strlen(s1);i++)
          {
              if(s1[i]>s2[i])
              {
                  printf("1\n");
              }
              break;
            if(s1[i]<s2[i])
                printf("-1\n");
                break;

          }
    return 0;
}
