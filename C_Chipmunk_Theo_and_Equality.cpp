#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> sixseven(n);
        for (int i = 0; i < n; i++) cin >> sixseven[i];

        sort(sixseven.begin(), sixseven.end());

        int best = n / 2; // choosing a location not equal to any existing position

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && sixseven[j] == sixseven[i]) j++;

            int cnt = j - i;
            int less = i;
            int greater = n - j;

            best = max(best, cnt + min(less, greater));

            i = j;
        }

        cout << n - best << '\n';
    }

    return 0;
}