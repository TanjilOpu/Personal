#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int i,vowel=0;
     char s[20],str[20];
     gets(s);
     for(i=0;s[i]!='\0';i++)
     {
               char ch=s[i];
           if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowel++;
           // printf("vol %s\n",s[i]);
           continue;
        }
        else
        {
            str[i]=s[i];
         //  printf(" resulev%s\n",str[i]);
        }

     }
     puts(str);
    //printf("%d",vowel);

    return 0;
}
