#include<bits/stdc++.h>
//#define endl '\n'
#define int long long int
#define vc vector<int>
#define f0(n) for(int i=0;i<n;i++)
//#define f1(n) for(int i=1;i<=n;i++)
#define srtall(v) sort(v.begin(),v.end())
#define pb push_back
#define ppb pop_back
//#define ld long double
//#define ui unsigned int
//#define mod 1000000007
//#define stp setpercision
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int prime(int c)
{
    for(int i=2;i<c;i++)
    {
        if(c%i==0) return 1;
    }
    return 2;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c==2) cout<<"Alice"<<endl;
    else {
        int x= prime(c);
       if(x==1) cout<<"Bob"<<endl;
       else cout<<"Alice"<<endl;
    
    }
       
   
    
}

int32_t main() 
{
    faster();
    int tc=1;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}