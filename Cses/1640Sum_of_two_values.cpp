#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x;
    cin >> n >> x;
   vector<pair<ll,int>>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i].first;
       v[i].second=i+1;
   }
   sort(v.begin(),v.end());
   int l=0 , r=n-1;
   while(l<r)
   {
       ll sum=v[l].first+v[r].first;
       if(sum==x)
       {
        cout<<v[l].second<<" "<<v[r].second<<endl;
        return;
       }
       else if(sum<x)
       {
        l++;
       }
       else r--;
   }
   cout<<"IMPOSSIBLE"<<endl;
}

int main() {
    solve();
}
