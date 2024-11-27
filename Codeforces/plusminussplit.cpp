#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cp,cn,r,tc;
    cin>>tc;
    while(tc--)
    {
        cn=0;
        cp=0;
 cin>>t;
    char str[t];

    for(int i=0;i<t;i++)
    {
        cin>>str[i];
        if(str[i]=='+')
        cp++;
        else cn++;
    }
    if(cp>=cn)
    {
         r=cp-cn;
    }
    else if(cn>cp)
    {

r=cn-cp;
    }
    cout<<r<<endl;
    }
   

    return 0 ;
}