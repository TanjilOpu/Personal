#include <iostream>
using namespace std;
#define ll long long int
 
ll Coin(ll n)
{
    ll cnt = 1;
    while (n > 3)
    {
        n /= 4;
        cnt *= 2;
    }
    return cnt;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin >> n;
        cout << Coin(n) << endl;
    }
 
    return 0;
}