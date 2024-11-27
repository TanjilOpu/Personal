#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n,p,r;
    cin>>n>>p;
    if(n%2==0)
    {
        long long int tem=n/2;
        if(p<=tem)
        {
            r=(p*2)-1;
        }
        else
        r=(p-tem)*2;

    }
    else if(n%2!=0)
    {
        long long int temp=(n/2)+1;
        if(p<=temp)
        {
            r =(p*2)-1;
        }
        else 
            r =(p-temp)*2;
    }
    cout<<r<<endl;
   // int real=p-((n/2)+1)*2;
    //cout<<real<<endl;

    return 0;
}