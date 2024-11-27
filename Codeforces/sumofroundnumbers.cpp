#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,r1,r2,r3,r4;
    cin>>t;
    while(t--)
    {
        r1=0;
        r2=0;
        r3=0;
        s=0;
        cin>>n;
        if(n>10)
        {
            
            r1=n%10;
            if(r1>0)
            {
                s++;
            }
            n=n-r1;

        }
        if(n>100)
        {
            
            r2=n%100;
            if(r2>0)
            {
                s++;
            }
            n=n-r2;
        }
        if(n>1000)
        {
          
          r3=n%1000;
          if(r3>0)
          {
            s++;
          }
          n=n-r3;
        }
        if(n>=1000)
        {
        s++;
        r4=n;
        }
        cout<<s<<endl;
        if(r1!=0 && r2!=0 && r3!=0 && r4!=0)
        cout<<r1<<' '<<r2 <<' '<<r3<<' '<<r4<<endl;
         if(r1!=0 && r2!=0 && r3!=0 && r4==0)
        cout<<r1<<' '<<r2 <<' '<<r3<<endl;

         if(r1!=0 && r2!=0 && r3==0 && r4==0)
        cout<<r1<<' '<<r2<<endl;
         if(r1!=0 && r2==0 && r3==0 && r4==0)
        cout<<r1<<endl;
         if(r1==0 && r2==0 && r3==0 && r4==0)
         {
            s=1;
            cout<<s<<endl;
            cout<<n<<endl;
         }
        

        
    }

    return 0;
}