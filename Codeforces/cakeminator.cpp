#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
     char ma[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ma[i][j];
        }
    }
    int ro=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(ma[i][j]=='S')
            {
                ro++;
                break;
            }
        }
    }
      int tr=(r*c)-(ro*c);
    int clm=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(ma[j][i]=='S')
            {
                clm++;
                break;
            }
        }
    }

    int tc=(r*c)-(clm*r);
    int sed=(r-ro)*(c-clm);
    int result = tr+tc-sed;
    cout<<result<<endl;
    return 0;
}
