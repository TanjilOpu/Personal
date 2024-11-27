#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> vn(n);
    vector<ll> vm(m);
    for (int i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vm[i];
    }
    ll an = 0, am = 0;
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());
    ll cnt = 0,i=0,j=0;
    while(i<n && j<m)
    {
        if(vm[j] < vn[i]-k)
        {
            j++;
        }
        else if(vm[j] > vn[i]+k)
        {
            i++;
        }
        else{
            i++;
            j++;
            cnt++;
        }

    }

    cout << cnt << endl;
    return 0;
}