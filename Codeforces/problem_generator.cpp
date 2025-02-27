#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        // for(auto it:mp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        if(m==1)
        {
            cout<<7-mp.size()<<endl;
        }
        else 
        {
            int cnt=0;
            for(auto it:mp)
            {
                if(it.second<m)
                {
                    int ad=m-it.second;
                    cnt+=ad;
                }

            }
            int add=7-mp.size();
            cnt+=add*m;
            cout<<cnt<<endl;
        }//cout<<"coming\n";
      //  cout<<mp.size();

    }
}