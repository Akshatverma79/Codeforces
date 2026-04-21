#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll n, ll s, ll m) {
    ll carry = 0;
    for (int i = 0; i <= 61; i++) {
        ll available = carry;
        if ((m >> i) & 1) {
            available += n;
        }
        
        if ((s >> i) & 1) {
            if (available < 1) return false;
            available -= 1;
        }
        
        carry = available / 2;
        if (carry > s) carry = s + 7; 
    }
    return carry >= 0;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        ll s, m;
        cin >> s >> m;
        
        ll lb = m & -m;
        if (s % lb != 0) {
            cout << -1 << "\n";
            continue;
        }

        ll low = 1, high = s, ans = s;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (check(mid, s, m)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}