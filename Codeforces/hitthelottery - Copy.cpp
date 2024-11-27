#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,v,r;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        if(n>=100)
    {
         v=n/100;
    n=n%100;
    c=c+v;

    }
   
    else if(n>=20)
    {
        v=n/20;
        c=c+v;
        n=n%20;
    }
    else if(n>=10)
    {
        v=n/10;
        c=c+v;
        n=n%10;
    }
    else if(n>=5)
    {
        v=n/5;
        c=c+v;
        n=n%5;
    }
    else if(n>=1)
    {
        v=n/1;
        c=c+v;
        n=n%1;
    }

    }
    
    cout<<c<<endl;
    

    return 0;
}