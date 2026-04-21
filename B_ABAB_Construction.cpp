#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string x;
        cin >> x;

        bool even = true, odd = false;

        for (int i = 1; i <= n; i++) {
            bool next_even = false, next_odd = false;
            char tar = x[i - 1];
            if (even) {
                if (tar == '?' || tar == 'a')
                    next_odd = true;
                int right_idx = n - i + 1;
                char right_char = (right_idx % 2 ? 'a' : 'b');
                if (tar == '?' || tar == right_char)
                    next_even = true;
            }
            if (odd) {
                if (tar == '?' || tar == 'b')
                    next_even = true;
                int right_idx = n - i + 2;
                char right_char = (right_idx % 2 ? 'a' : 'b');
                if (tar == '?' || tar == right_char)
                    next_odd = true;
            }

            even = next_even;
            odd = next_odd;

            if (!even && !odd)
                break;
        }

        cout << (even || odd ? "YES\n" : "NO\n");
    }

    return 0;
}