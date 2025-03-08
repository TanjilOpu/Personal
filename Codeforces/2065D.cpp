#include<bits/stdc++.h>
#define ll long long int
//#define pb push_back
//#define ppb pop_back
//#define ld long double
//#define ui unsigned int
//#define mod 1000000007
//#define stp setpercision
//#define yes cout<<"YES"<<endl
//#define no cout<<"NO"<<endl
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
using namespace std;
void solve()
{
     int r,c;
     cin>>r>>c;
     int arr[r+1][c+1];
     int ps=0;
     for(int i=0;i<r;i++)
     {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
     }
     
     for(int i=0;i<r;i++)
     { int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
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