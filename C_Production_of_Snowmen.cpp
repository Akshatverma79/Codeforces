#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int>a(n), b(n), c(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        for (int &x : c) cin >> x;

        long long ab = 0, bc = 0;

        for (int d = 0; d < n; d++) {
            bool ok = true;
            for (int i = 0; i < n && ok; i++)
                if (a[i] >= b[(i + d) % n]) ok = false;
            if (ok) ab++;
        }

        for (int d = 0; d < n; d++) {
            bool ok = true;
            for (int i = 0; i < n && ok; i++)
                if (b[i] >= c[(i + d) % n]) ok = false;
            if (ok) bc++;
        }

        cout << ab * bc * n << "\n";
    }
}
