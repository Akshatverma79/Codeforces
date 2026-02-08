#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n + 2), b(n + 2);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        for (int i = 1; i <= n; ++i) cin >> b[i];

        vector<long long> suf(n + 3, 0);
        for (int i = n; i >= 1; --i) {
            suf[i] = max({a[i], b[i], suf[i + 1]});
        }

        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            pref[i] = pref[i - 1] + suf[i];
        }

        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1];
            if (i != q - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
