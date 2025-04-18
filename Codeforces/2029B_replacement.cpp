#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s,s1; 
    cin>>s;
    int one=count(s.begin(),s.end(),'1');
    int zero=n-one;
    cin>>s1;
    int t=n-1;
   for(int i=0;i<n-1;i++)
    {
        if(zero ==0 || one==0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else{
            if(s1[i]=='1')
            {
                zero--;
            }
            else one--;
        }
    }
   cout<<"YES"<<endl;
}
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
    solve();
   }   
}