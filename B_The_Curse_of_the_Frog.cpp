#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        long long freejump = 0;
        long long costjump = 0;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            freejump += (b - 1) * a;
            costjump = max(costjump, b * a - c);
        }

        if (freejump >= x) {
            cout << 0 << "\n";
        } 
        else if (costjump <= 0) {
            cout << -1 << "\n";
        } 
        else {
            long long minrollback = x - freejump;
            long long ans = minrollback / costjump;
            if (minrollback % costjump != 0) ans++;
            cout << ans <<endl;
        }
    }
    return 0;
}
