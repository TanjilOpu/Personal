#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ca=0,cb=0,cm=0;
    for(int i=1; i<=6; i++)
    {
        int da=abs(i-a);
        int db=abs(i-b);
        if(da-db==0)
        {
            cm++;
        }
        else
        {
            if(da<db)
            {
                ca++;
            }
            else cb++;
        }
    }
    cout<<ca<<" "<<cm<< " "<<cb<<endl;
    return 0;
}
