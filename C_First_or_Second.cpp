#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> suf(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
            suf[i] = suf[i + 1] + a[i];

        vector<long long> preAbs(n + 1, 0);
        for (int i = 0; i < n; i++)
            preAbs[i + 1] = preAbs[i] + llabs(a[i]);

        long long ans = LLONG_MIN;

        for (int k = 1; k <= n; k++) {
            long long cur;

            if (k == 1) {
                cur = -suf[1];
            } else {
                cur = a[0];
                if (k > 2)
                    cur += preAbs[k - 1] - preAbs[1];
                if (k < n)
                    cur -= suf[k];
            }

            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}
