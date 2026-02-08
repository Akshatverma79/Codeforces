#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                pos.push_back(i);
            }
        }
        if (pos.size() == 0) {
            cout << (n + 2) / 3 << "\n";
            continue;
        }

        int total = pos.size();

        total += pos[0] / 3;

        for (int i = 0; i + 1 < pos.size(); i++) {
            int gap = pos[i + 1] - pos[i] - 1;
            if (gap >= 3) {
                total += (gap - 1) / 3;
            }
        }

        int last_gap = (n - 1) - pos.back();
        total += last_gap / 3;

        cout << total << "\n";
    }

    return 0;
}
