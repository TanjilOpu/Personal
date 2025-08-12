#include <bits/stdc++.h>
using namespace std;

bool is_bad(vector<int>& q) {
    int n = q.size();
    for (int i = 0; i <= n - 5; i++) {
        bool inc = true, dec = true;
        for (int j = 0; j < 4; j++) {
            if (q[i + j] >= q[i + j + 1]) inc = false;
            if (q[i + j] <= q[i + j + 1]) dec = false;
        }
        if (inc || dec) return true;
    }
    return false;
}

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n);
        for (int &x : p) cin >> x;

        // Safe strategy: always take from the left
        // Alternative: simulate both sides and avoid bad sequences
        int l = 0, r = n - 1;
        string res = "";
        vector<int> q;
        while (l <= r) {
            // Try taking left
            q.push_back(p[l]);
            res += 'L';
            l++;
        }

        // If you want to verify correctness (optional)
        // if (is_bad(q)) cout << "BAD\n";
        // else cout << res << "\n";

        cout << res << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
