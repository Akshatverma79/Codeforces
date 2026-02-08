#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int best = 1, cur = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                continue;
            } 
            else if (a[i] == a[i - 1] + 1) {
                cur++;
            } 
            else {
                best = max(best, cur);
                cur = 1;
            }
        }
        best = max(best, cur);
        cout << best << "\n";
    }

    return 0;
}
