#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end(), greater<long long>());

        long long maxScore = 0;
        long long needed = 0;

        for (int k = 1; k <= n; k++) {
            needed += b[k - 1];
            if (needed > n) break;

            long long x = a[needed - 1];
            maxScore = max(maxScore, x * k);
        }

        cout << maxScore << "\n";
    }

    return 0;
}
