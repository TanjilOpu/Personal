#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,d;
    cin>>m>>n;
    while(1)
    {
        if(m!=0 && n!=0)
        {
        d++;
        n--;
        m--;
        }
        else break;
       
    }
    if(d%2==1)
    {
        cout<<"Akshat\n";
    }
    else cout<<"Malvika\n";

    return 0;
}