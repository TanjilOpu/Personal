#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    vector<ll>va(n),vb(n);
    for(ll i=0;i<n;i++)
    {
        cin>>va[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>vb[i];
    }
    int la=0,ra=n-1;
    int lb=0,rb=n-1;
    while(la<ra)
    {
        int sz=va.size();
        if(va[la] == vb[lb] || va[la] == vb[rb])
        {
            if(va[ra]== vb[lb] || va[ra]==vb[rb])
            {
                if(va[la] == vb[lb])
                {
                    // va.erase(va.begin());
                    // vb.erase(vb.begin());
                    la++;
                    lb++;
                }
                else if(va[la] == vb[rb])
                {
                   la++;// va.erase(va.begin());
                    rb--;//vb.pop_back();
                }
                else if(va[ra]==vb[lb])
                {
                   ra--;// va.pop_back();
                    lb++;//vb.erase(vb.begin());
                }
                else if(va[ra]==vb[rb])
                {
                    // va.pop_back();
                    // vb.pop_back();
                    ra--;
                    rb--;
                }

            }
            else {
                cout<<"Alice"<<endl;
                return;
            }
        }
        else {
            cout<<"Alice"<<endl;
            return;
        }
    }
    cout<<"Bob"<<endl;
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