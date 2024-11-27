#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc ; cin>>tc;
    while(tc--)
    {
        int n,m,k; cin>>n>>m>>k;
        vector<int>vn;
        vector<int>vm;
        for(int i=0;i<n;i++)
        {
            int nx ; cin>>nx;
            vn.push_back(nx);
        }
          for(int i=0;i<m;i++)
        {
            int mx ; cin>>mx;
            vm.push_back(mx);
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vn[i]+vm[j]<=k)

                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
