#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> p(n), s(n), a(n);

    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> s[i];

    for (int i = 0; i < n; ++i)
        a[i] = gcd(p[i], s[i]);

    vector<ll> prefix(n), suffix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; ++i)
        prefix[i] = gcd(prefix[i - 1], a[i]);

    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        suffix[i] = gcd(suffix[i + 1], a[i]);

    if (prefix == p && suffix == s)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
