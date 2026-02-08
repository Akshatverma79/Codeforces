#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int mex = 0;
        while (cnt[mex] > 0) mex++;

        bool ok;
        if (mex == 0) {
            ok = false;
        } else if (mex == 1 && cnt[0] >= 2) {
            ok = false;
        } else {
            ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
