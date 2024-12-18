#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcdd(ll a, ll b) {
    // while (b != 0) {
    //     a %= b;
    //     swap(a, b);
    // }
    ll aa = __gcd(a,b);

    ll cnt = 0;
    ll sqrt_n = sqrt(aa);  

    for (ll i = 1; i <= sqrt_n; i++) {
        if (aa % i == 0) {
            cnt++; 
            if (i != aa/ i) {
                cnt++;  
            }
        }
    }
    return cnt;
   
}

int main() {
    ios::sync_with_stdio(false);  
    cin.tie(0);  
    
    ll t;
    cin >> t; 

    while (t--) {
        ll a, b;
        cin >> a >> b;
        ll g = gcdd(a, b);
        cout << g << "\n";
    }

    return 0;
}

   