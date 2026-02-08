#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> orig(n), add(n, 0);
        vector<int> last(n, -1);
        for (int i = 0; i < n; i++) {
            cin >> orig[i];
        }
        int cur_ver = 0;
        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--;
            if (last[b] != cur_ver) {
                add[b] = 0;
                last[b] = cur_ver;
            }
            add[b] += c;
            if (orig[b] + add[b] > h) {
                cur_ver++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (last[i] == cur_ver)
                cout << orig[i] + add[i] << " ";
            else
                cout << orig[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
