#include <bits/stdc++.h>
using namespace std;

long long gcd_ll(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long g = 0;
        for (int i = 1; i < n; i++) {
            g = gcd_ll(g, llabs(a[i] - a[0]));
        }

        cout << g << '\n';
    }

    return 0;
}
