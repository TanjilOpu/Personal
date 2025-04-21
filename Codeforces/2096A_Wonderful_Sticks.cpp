#include<bits/stdc++.h>
//#define endl '\n'
#define ll long long int
// #define vc vector<int>
// #define f0(n) for(int i=0;i<n;i++)
// #define f1(n) for(int i=1;i<=n;i++)
// #define srtall(v) sort(v.begin(),v.end())
// #define pb push_back
// #define ppb pop_back
// #define ld long double
// #define ui unsigned int
// #define mod 1000000007
// #define stp setpercision
// #define cy cout<<"YES"<<endl
// #define cn cout<<"NO"<<endl
 #define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll mx=count(s.begin(),s.end(),'>');
    mx=n-mx;
    //cout<<"mx = "<<mx<<endl;
    ll mni = mx-1;
    ll mxi=mx+1;
    cout<<mx<<" ";
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='<')
        {
            cout<<mni<<" ";
            mni--;
        }
        else {
            cout<<mxi<<" ";
            mxi++;
        }

    }
cout<<endl;
}

int main() 
{
    faster();
    ll tc=1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}