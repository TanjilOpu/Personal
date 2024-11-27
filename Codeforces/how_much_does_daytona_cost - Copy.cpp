#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==k)
            {
                cnt++;
            }

        }
        if(cnt>0)
        {
            cout<< "YES\n";
        }
        else cout<< "NO\n";
    }

    return 0;
}
