#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long k = 1; k <= n; ++k) {
        long long totalPairs = (k * k * (k * k - 1)) / 2;
        long long attackingPairs = 4 * (k - 1) * (k - 2);
        cout << totalPairs - attackingPairs << endl;
    }
    return 0;
}
//courtesy Sai anis malla youtube channel 
//you have to learn combination 