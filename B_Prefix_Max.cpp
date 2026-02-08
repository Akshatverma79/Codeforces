#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long ans = 0;
        for (int i = -1; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (i != -1) swap(a[i], a[j]);

                long long sum = 0;
                int mx = 0;
                for (int k = 0; k < n; k++) {
                    mx = max(mx, a[k]);
                    sum += mx;
                }
                ans = max(ans, sum);
                if (i != -1) swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
