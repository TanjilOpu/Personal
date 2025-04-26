#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
     set<int>st;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        st.insert(x);
     }
     cout<<st.size()<<endl;
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