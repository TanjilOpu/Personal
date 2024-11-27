#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main( )
{
    int i;

    char s[1000];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[0]>=97&&s[0]<=122)
        {
            s[0]=s[0]-32;
            break;
        }
    }
        puts(s);

    return 0;
}
