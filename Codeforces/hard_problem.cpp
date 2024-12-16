#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ppb pop_back
#define ld long double
#define vc vector
#define ui unsigned int
#define srt(v) sort(v.begin(),v.end())
#define mod 1000000007
#define stp setpercision
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll aseat  = min(m,a);
        ll faka_a = m-aseat;
        ll bseat = min(m,b);
        ll faka_b=m-b;
        ll tfka = 2*m-aseat-bseat;
        ll cseat = min(tfka,c);
        ll ans = aseat+bseat+cseat;
        cout<<ans<<endl;
    }
 
 
}