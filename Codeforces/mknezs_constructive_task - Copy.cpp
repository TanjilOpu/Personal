#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int as;
        cin>>as;
        if(as%2==0)
        {
             cout<<"YES\n";
             for(int i=1;i<=as;i++)
             {
               if(i%2==0)
               {
                cout<<"1"<<" ";
               }
               else cout<<"-1"<<" ";
             }
              cout<<"\n";
        }
       
        else 
        {
            if(as==3)
            {
                cout<<"NO\n";
            }
            else 
            {
                cout<<"YES\n";
                int x=as/2;
                int y=-(x-1);
                for(int i=1;i<=as;i++)
                {
                    if(i%2==0)
                    {
                        cout<<x<<" ";
                    }
                    else cout<<y<<" ";
                }
            }
             cout<<endl;
        } 

    }
       



    return 0;
}