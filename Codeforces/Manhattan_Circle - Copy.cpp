#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int r, c;
        cin >> r >> c;
        char arr[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>arr[i][j];
            }
        }
        int col  =0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]=='#')
                {
                           col = j+1;
                           break;
                }
            }
            if(col>0) break;
        }
     int row=20000;
     int ro =0;
     int colm;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)

            {
                if(arr[i][j]=='#')
                {
                    ro=j+1;
                    
                    break;
                }
               if(ro>0) break;
                
            }
        }
        cout<<ro<<" "<<col<<endl;

        
    }   
    
}