#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
   
    int crr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            crr[i][j]=1;
        }
    }
  
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int f=arr[i][j];
            //cout<<" f = "<<f<<endl;
            if(f%2==1)
            {
                crr[i][j]=(crr[i][j]+1)%2;
                if(j-1>=0)
                crr[i][j-1]=(crr[i][j-1]+1)%2;
                if(j+1<=2)
                crr[i][j+1]=(crr[i][j+1]+1)%2;
                if(i-1>=0)
                crr[i-1][j]=(crr[i-1][j]+1)%2;
                if(i+1<=2)
                crr[i+1][j]=(crr[i+1][j]+1)%2;
            }
    //          for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<crr[i][j];
    //     }
    //     cout<<endl;
    // }

        }
    }
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<crr[i][j];
        }
        cout<<endl;
    }
    
      
}