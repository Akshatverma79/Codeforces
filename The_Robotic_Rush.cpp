#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        unordered_set<long long> alive;
        vector<long long> robots(n), spikes(m);

        for (int i = 0; i < n; i++) {
            cin >> robots[i];
            alive.insert(robots[i]);
        }

        for (int i = 0; i < m; i++) {
            cin >> spikes[i];
        }

        string gdCode;
        cin >> gdCode;

        long long shift = 0;

        for (int i = 0; i < k; i++) {
            if (gdCode[i] == 'L') shift--;
            else shift++;

            vector<long long> dead;
            for (long long b : spikes) {
                long long pos = b - shift;
                if (alive.count(pos)) {
                    dead.push_back(pos);
                }
            }

            for (long long x : dead) {
                alive.erase(x);
            }

            cout << alive.size() << " ";
        }
        cout << "\n";
    }

    return 0;
}
