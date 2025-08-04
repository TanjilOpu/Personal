// problem link :  
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// order_set alias for PBDS with pair<int,int> and strict comparator less<>
template <typename T>
using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << '\n'
#define pb push_back
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>pbds;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int& x : v) cin >> x;

    order_set<pair<int, int>> st;
    vector<int> ans;

    for (int i = 0; i < n; ++i) {
        st.insert({v[i], i});  // insert with unique index to handle duplicates

        if (i >= k)
            st.erase({v[i - k], i - k});  // remove element sliding out of window

        if (i >= k - 1) {
            // median index: (k-1)/2 (0-based lower median)
            int median = st.find_by_order((k - 1) / 2)->first;
            ans.pb(median);
        }
    }

    for (int x : ans)
        cout << x << " ";
    nl;
}

int32_t main() {
    fast();
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--)
        solve();
}
