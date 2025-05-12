#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//ll gcdd(ll a, ll b) {
//    while (b != 0) {
//        ll temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
void solve()
{

    ll n;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    // for(auto it:mp)
    // {

    //     if(it.second>=2)
    //     {

    //         cout<< "YES\n";
    //         return;
    //     }
    // }
    ll p=min_element(v.begin(),v.end())-v.begin();
   // cout<<"p = "<<p<<endl;
        ll g=0;
   for (int i = 0; i < n; ++i) {
			if (i != p && v[i] % v[p] == 0) {
				g = __gcd(g, v[i]);
			}
		}
    if(g==v[p])
    {
        cout<< "YES\n";
        return;
    }
    cout<<"NO"<<endl;


}
int main()
{

    ll tc;
    cin>>tc;
    while(tc--)
    {

        solve();
    }
}