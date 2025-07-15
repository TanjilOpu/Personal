#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int l = s.size();
    if(l==2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        int open = 0,close = 0;
        for(int i=1;i<l-1;i++)
        {
            if(s[i]=='(') open++;
            else open--;
            if(open<0)
            {
                cout<<"YES\n";
                return;
            }

            
        }
    }
    cout<<"NO"<<endl;
      
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        solve();
    }
}