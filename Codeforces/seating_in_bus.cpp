#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void solve ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int left=v[0];
    int right=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]+1==left) left=v[i];
        else if(v[i]-1==right) right=v[i];
        else {
            cout<<"NO"<<endl;
            return ;
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
    return 0;
}

