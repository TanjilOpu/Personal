#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    set<ll>st;
    for(int i=0;i<n;i++)
    {
        st.insert(v[i]);
    }
    ll flag = st.size();
       cout<<flag<<endl;
    return 0;
}