#include<bits/stdc++.h>
#define ll long long int
#define vc vector
#define srt(v) sort(v.begin(),v.end())
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    set<ll>st;
    set<ll>stt;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
     for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        stt.insert(x);
    }
    ll sl=st.size();
    ll sttl=stt.size();
    if(sl ==1 && sttl==1) 
    {
        cout<<"NO"<<endl;
    }
    else if(sl==2 && sttl==1)
    {
        cout<<"NO"<<endl;
    }
    else if(sl==1 && sttl==2)
    {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    

}
int main()
{
    faster();
   ll tc;
   cin>>tc; 
   while(tc--)
     {
       solve();
           
     }
}