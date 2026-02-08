#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        vector<bool> used(n + 1, false);

        int curr;
        if (n % 2 == 0)
            curr = n;
        else
            curr = 1;
        p[n] = curr;
        used[curr] = true;

        for (int i = n - 1; i >= 1; i--) {
            if (curr + i <= n && used[curr + i] == false) {
                curr = curr + i;
            } else {
                curr = curr - i;
            }
            p[i] = curr;
            used[curr] = true;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i];
            if (i < n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
