#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    ll s = sum/2;
     vector<ll>v;
        vector<ll>v2;
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
       
        ll it=n;
        while(s>0)
        {
            if(s-it>=0)
            {
                s=s-it;
                v.push_back(it);
                it--;
            }
            else 
            {
                   v2.push_back(it);
                   it--;
            }
            
        }
        for(ll i=it;i>=1;i--)
        {
            v2.push_back(i);
        }
        cout<<v.size()<<endl;
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
         cout<<v2.size()<<endl;
        for(auto it:v2)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;

 
 
 
    return 0;
}