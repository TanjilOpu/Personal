#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int ln=0;
    while(n--)
    {
        int ln=0;
        int num;
        cin>>num;
        while(num!=0)
        {
            int r=num%10;
            num = num/10;
            if(r==4 || r==7)
            {
                ln++;
            }
        }
        if(ln<=k)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
