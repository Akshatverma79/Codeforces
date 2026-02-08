#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int first_one = -1;
        bool alice_wins = false;
        int i_pos = -1, j_pos = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && first_one == -1) {
                first_one = i;
            }
            if (s[i] == '0' && first_one != -1) {
                alice_wins = true;
                i_pos = first_one;
                j_pos = i;
                break;
            }
        }

        if (!alice_wins) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << 2 << "\n";
            cout << i_pos + 1 << " " << j_pos + 1 << "\n"; 
        }
    }
    return 0;
}
