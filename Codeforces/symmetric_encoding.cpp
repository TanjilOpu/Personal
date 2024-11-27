#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int ss; cin>>ss;
        string s; cin>>s;
        set<char>st(s.begin(),s.end());
        string s1;
       for(auto it =st.begin();it !=st.end();it++)
       {
           s1=s1+*it;
       }
       string o;
       int s1s=s1.size();
       for(int i=0;i<ss;i++)
       {
           for(int j=0;j<s1s;j++)
           {
               if(s[i]==s1[j])
               {
                   int k=s1s-1-j;
                   o.push_back(s1[k]);
               }
           }
       }
       for(int i=0;i<ss;i++)
       {
           cout<<o[i];
       }
       cout<<endl;
    }
    return 0;
}
