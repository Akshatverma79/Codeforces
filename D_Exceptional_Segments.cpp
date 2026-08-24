#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 998244353;

// Count numbers in [0, X] with remainder 'rem' modulo 4
ll countMod4(ll X, ll rem) {
    if (X < rem) return 0;
    return (X - rem) / 4 + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        // Count values on right side [x, n]
        ll right_rem1 = countMod4(n, 1) - countMod4(x - 1, 1);
        ll right_rem3 = countMod4(n, 3) - countMod4(x - 1, 3);

        // Count values on left side [0, x-1]
        ll left_rem1 = countMod4(x - 1, 1);
        ll left_rem3 = countMod4(x - 1, 3);

        // Calculate valid pairs
        ll pairs1 = (right_rem1 % MOD) * (left_rem1 % MOD) % MOD;

        // +1 because L = 0 also gives XOR = 0
        ll pairs0 = (right_rem3 % MOD) * ((left_rem3 + 1) % MOD) % MOD;

        ll answer = (pairs1 + pairs0) % MOD;

        cout << answer << "\n";
    }

    return 0;
}