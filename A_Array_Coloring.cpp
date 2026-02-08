#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i});
        }

        sort(v.begin(), v.end());

        int expected = (v[0].second % 2) ^ (0 % 2);
        bool ok = true;

        for (int rank = 0; rank < n; rank++) {
            int originalIndex = v[rank].second;
            int cur = (originalIndex % 2) ^ (rank % 2);
            if (cur != expected) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
