#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ppb pop_back
#define ld long double
#define vc vector
#define ui unsigned int
#define srt(v) sort(v.begin(),v.end())
#define mod 1000000007
#define stp setpercision
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='q')
        {
            s[i]='p';
        }
        else if(s[i]=='p')
        {
            s[i]='q';
        }
    }
    cout<<s<<endl;
  }
 
}