#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)
    {
        cin>>it;
    }
    stack<int>st;
    st.push(v[0]);
    for(int i=1;i<n;i++)
    { 
        int topp = st.top();
        if(topp+1<v[i])
        {
            st.push(v[i]);
        }
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