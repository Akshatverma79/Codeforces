#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        int best = 0;

        for (int start = 0; start < 2; start++) {
            long long w = a, d = b, cur = 1;
            int cnt = 0, color = start;

            while ((color == 0 ? w : d) >= cur) {
                if (color == 0) w -= cur;
                else d -= cur;
                cnt++;
                cur <<= 1;
                color ^= 1;
            }
            best = max(best, cnt);
        }

        cout << best << "\n";
    }
}
