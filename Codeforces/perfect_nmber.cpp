#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=19 ;i<=30;i++)
    {
        int r=0;int sum=0;
        int num= i;
        while(num>9)
        {
            r=num%10;
            sum+=r;
            num=num/10;
        }
        sum +=num;
        if(sum == 10)
        {

            cout<< "i = "<<i<<endl;
            return 0;
        }

    }
}
