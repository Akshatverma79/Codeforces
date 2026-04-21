#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long sum = x + y;
        if (sum < 0 || sum % 3 != 0) {
            cout << "NO\n";
        } else {
            long long k = sum / 3;
            if (x >= 2 * k && x <= 4 * k) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}