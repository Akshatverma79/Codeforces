#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (n == k) {
            cout << 0 << "\n";
            continue;
        }
        long long min_val = n;
        long long max_val = n;
        int time = 0;

        while (min_val > 0 || max_val > 0) {
            time++;

            long long new_min = min_val / 2;
            long long new_max = (max_val + 1) / 2;

            min_val = new_min;
            max_val = new_max;

            if (k >= min_val && k <= max_val) {
                cout << time << "\n";
                break;
            }

            if (max_val < k) {
                cout << -1 << "\n";
                break;
            }
        }
    }

    return 0;
}
