#include<stdio.h>
int main ()
{
    long long int a,b,c,p,q,f;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a%c==0)
        p=a/c;
    else
        p=a/c+1;
    if(b%c==0)
        q=b/c;
    else
        q=b/c+1;
    f=p*q;
    printf("%lld\n",f);
    return 0;
}
