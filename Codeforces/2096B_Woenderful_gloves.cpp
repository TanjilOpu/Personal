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

void solve()
{
   int n,k;
   cin>>n>>k;
   vector<int>vl(n);
   vector<int>vr(n);
   vector<int>vlast;
   int sl=0,sr=0,sum=0;
   for(int i=0;i<n;i++)
   {
    cin>>vl[i];
   }
   for(int i=0;i<n;i++)
   {
    cin>>vr[i];
   }
      
   for(int i=0;i<n;i++)
   {
    if(vl[i]>vr[i])
    {
       sum+=vl[i];
       vlast.push_back(vr[i]);
    }
    else
    {
        sum+=vr[i];
        vlast.push_back(vl[i]);
    } 
   }
    sort(vlast.rbegin(),vlast.rend());
    for(int i=0;i<k-1;i++)
    {
        sum+=vlast[i];
    }
    cout<<sum+1<<endl;


//    cout<<"sl = "<<sl<<endl;
//    cout<<"sr = "<<sr<<endl;
//    int cnt=0;
//    if(sl==sr)
//    {
//     cnt=sl+sr;
//     cout<<cnt<<endl;
//     return;
//    }
//    else if(sl>sr)
//    {
//     cnt+=sl;
//     sort(vr.rbegin(),vr.rend());
//     for(int i=0;i<k-1;i++)
//     {
//       cnt+=vr[i];
//     }
//    }
//    else{
//     cnt+=sr;
//     sort(vl.rbegin(),vl.rend());
//       for(int i=0;i<k-1;i++)
//       {
//         cnt+=vl[i];
//       }
//    }
//    cout<<cnt+1<<endl;
   
    
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