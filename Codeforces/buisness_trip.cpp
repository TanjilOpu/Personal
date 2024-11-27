#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h;
     cin>>h;
     vector<int>v(12);
     for(int i=0;i<12;i++)
     {
        cin>>v[i];
     }
     if(h==0) 
     {
        cout<<0<<endl;
        return 0;
     }
     int sum=0;
     int flag=0;
     sort(v.rbegin(),v.rend());
     for(int i=0;i<12;i++)
     {  
        sum=sum+v[i];

         if(sum>=h)
        {
            cout<<i+1<<endl;
            flag=1;
            return 0;
        }
     }
     if(flag==0)
     {
        cout<<-1<<endl;
     }

    return 0;
}