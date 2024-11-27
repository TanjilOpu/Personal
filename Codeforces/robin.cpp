#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,k; cin>>n>>k;
        int r=0,g=0,c;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            if(c>=k) g+=c;
            if(c==0 && g!=0)
            {
                g--;
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
