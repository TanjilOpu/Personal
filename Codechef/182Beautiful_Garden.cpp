#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (n <= k)
    {
        cout << 0 << endl;
        return;
    }
    int sum = 0,f;
    sum += n - k;
    int t=n-k;
    for(int i=0;i<t;i++)
    {
         f=floor(d/v[i]);
         if(f*v[i]==d){
        f--;
         }
         sum+=f;
    }
    cout<<sum<<endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}