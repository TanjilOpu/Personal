#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string s;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++)
        {
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='#')
                {
                    int x=i+1;
                    v.push_back(x);
                }
            }
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}