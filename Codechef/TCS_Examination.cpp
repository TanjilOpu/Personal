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
    
   int a1,b1,c1,a2,b2,c2;
   cin>>a1>>b1>>c1;
   cin>>a2>>b2>>c2;
   int as=a1+b1+c1;
   int bs=a2+b2+c2;
   if(as>bs) cout<<"DRAGON"<<endl;
   else if(bs>as) cout<<"SLOTH"<<endl;
   else {
    if(a1>a2) cout<<"DRAGON"<<endl;
    else if(a2>a1) cout<<"SLOTH"<<endl;
    if(a1==a2)
    {
        if(b1>b2)
        {
            cout<<"DRAGON"<<endl;
        }
        else if(b2>b1) 
        {
            cout<<"SLOTH"<<endl;
        }
        if(b1 == b2)
        {
            cout<<"TIE"<<endl;
        }
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