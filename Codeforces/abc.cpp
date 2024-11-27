#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >>n;
    int c=0;
    for(ll i=19;i<1000000000;i++)
    {
        int sum=0;
        int num=i;
        while(num>9)
        {
            sum=sum+(num%10);
            num = num/10;
           
        }
        sum = sum + num;
        if(sum == 10)
        {
            c++;
            if(c== n)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
}
