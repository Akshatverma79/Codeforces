#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        // Case k = 1
        if (k == 1) {
            cout << n << '\n';
            continue;
        }

        // Find highest set bit of n
        int msb = 63 - __builtin_clzll(n);
        long long mask = (1LL << msb) - 1;

        // Optimal pair for k = 2
        long long a = mask;
        long long b = mask ^ n;

        if (k == 2) {
            cout << a << " " << b << '\n';
            continue;
        }

        // k >= 3
        if (k % 2 == 1) {
            // odd k
            for (int i = 0; i < k; i++)
                cout << n << " ";
            cout << '\n';
        } else {
            // even k >= 4
            for (int i = 0; i < k - 2; i++)
                cout << n << " ";
            cout << a << " " << b << '\n';
        }
    }
    return 0;
}
