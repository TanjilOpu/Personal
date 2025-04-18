#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k, s, cnt = 0;
    cin >> n >> k;
    
        if(n%2==1 && k%2==1)
        {
            n-=k;
            cnt++;
        }
        else if(n%2==1 && k%2==0)
        {
            n-=k;
            n++;
            cnt++;
        }
         if(k%2==1)
         {
            k--;
         }
        if(n>=k)
        {
            cnt+=n/k;
            n=n%k;
        }
        if(n>0)
        {
            cnt++;
        }
    cout<<cnt<<endl;
    
    
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}