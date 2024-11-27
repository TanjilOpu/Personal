#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
 long long int r,t;
 t=n/2;

 if(n%2==0)
 {
    cout<<t<<endl;
 }
 else if(n%2==1)
 {
    cout<<(-1*t)-1<<endl;
 }
   
    return 0;
}