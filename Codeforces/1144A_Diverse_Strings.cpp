#include<bits/stdc++.h>
using namespace std;
void solve()
{
      string s;
        cin>>s;
        sort(s.begin(),s.end());
        int l=s.length();
        for(int i=1;i<l;i++)
        {
           int a = int(s[i]);
           int b=int(s[i-1]);
           if(a-b!=1)
           {
            cout<<"No"<<endl;
            return;
           }
        }
        cout<<"Yes"<<endl;

}
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
      solve();
    }
}