#include<bits/stdc++.h>
using namespace std;
int main()

{
    int tc ; cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        string a,b;
        int flag=1;
          int f; cin>>f;
          int food=f;
          int sf=0;
          while(f--)
          {
            
            cin>>a>>b;
            if(a == "soda" && b == "wine")
            {
                flag=1;
            }
            else if(a == "water" && b == "wine")
            {
                flag=1;
            }
            else if(a == "water" && b == "soda")
            {
                flag = 1;
            }
            else 
            flag = 0 ;
            sf=sf+flag;

          }
           if(sf == food)
            { 
                cout<<"Case "<<i<<": Yes";
            }
            else cout<<"Case "<<i<<": No";
            if(i!=tc)
            {
                cout<<endl;
            }

    }
    return 0;
}