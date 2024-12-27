#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll n, ll m) {
    if (n == m) {
        return 1; 
    }
    if (n < m || n % 3 != 0) {
        return 0; 
    }

    ll n1 = n / 3;
    ll n2 = 2 * n / 3;


    if (solve(n1, m) || solve(n2, m)) {
        return 1;
    }
    return 0;
}

int main() {
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n, m;
        cin >> n >> m;
        if (n == m) {
            cout << "YES\n";
        } else if (n % 3 != 0 || n < m) {
            cout << "NO\n";
        } else {
            ll res = solve(n, m);
            if (res == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
