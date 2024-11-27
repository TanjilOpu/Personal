#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int r;
        char c;
        cin>>r;
        vector<int>v(r);
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=4; j++)
            {
                cin>>c;
            }
        }
        for(int i=r;i>=1;i--)
        {
            for(int j=1;j<=4;j++)
            {
                if(c=='#')
                {
                    cout<<" j= " <<j;
                     v.push_back(j);
                  break;
                }
            }
        }
//        for(auto it = v.begin(); it!=v.end();it++)
//        {
//            cout<<*it<< " ";
//        }
//           cout<<endl;
    }
    return 0;
}
