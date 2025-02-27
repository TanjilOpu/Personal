#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{

        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        //for(auto it:v) cout<<it;
        ll expect;
        if(n==k)
        {
                 expect=1;
            for(ll i=1;i<n;i+=2)
            {
                if(v[i]!=expect)
                {
                    cout<<expect<<endl;
                    return;
                }
                
                expect++;
            }
            cout<<expect<<endl;
            return;
        }
       
           for(int i = 1; i <= n - k + 1; i++){
        if(v[i] != 1){
            cout << 1 <<'\n';return;
        }
    }
    cout << 2 << '\n';
   
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