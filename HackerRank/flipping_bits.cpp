#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ppb pop_back
#define ld long double
#define ui unsigned int
#define vc vector
#define srt(v) sort(v.begin(),v.end())
#define mod 1000000007
#define stp setpercision
using namespace std;
ui fliping_bits(ui n)
{
    for(int i=0;i<32;i++)
    { 
           ui bit = (n>>i) & 1;
           ui mask = 1<<i;
           n^=mask;
           
    }
    return n;
}
int main()
{
 ll tc;
 cin>>tc;
 while(tc--)
 {
   ui n;
    cin>>n;
    //cout<<n<<endl;
     ui n1 = fliping_bits(n);
     cout<<n1<<endl;

 }
 
}