#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string r;
        cin >> r;
        int n = r.size();
        int ops = 0;

        if (r[0] == 'u') {
            r[0] = 's';
            ops++;
        }
        if (r[n - 1] == 'u') {
            r[n - 1] = 's';
            ops++;
        }

        for (int i = 0; i + 1 < n; i++) {
            if (r[i] == 'u' && r[i + 1] == 'u') {
                r[i + 1] = 's';
                ops++;
            }
        }

        int cntS = 0;
        for (char c : r) {
            if (c == 's') cntS++;
        }
        if (cntS < 2) ops++;

        cout << ops << '\n';
    }

    return 0;
}
