#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        long long current_sum = 0;
        for (char c : s) current_sum += (c - '0');
        
        if (current_sum <= 9) {
            cout << 0 << "\n";
            continue;
        }

        vector<int> reductions;
        for (int i = 0; i < s.length(); ++i) {
            int d = s[i] - '0';
            if (i == 0) {
                if (d > 1) reductions.push_back(d - 1);
            } else {
                if (d > 0) reductions.push_back(d);
            }
        }

        sort(reductions.rbegin(), reductions.rend());

        int moves = 0;
        for (int r : reductions) {
            current_sum -= r;
            moves++;
            if (current_sum <= 9) break;
        }
        cout << moves << "\n";
    }
    return 0;
}