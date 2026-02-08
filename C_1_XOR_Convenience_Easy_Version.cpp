#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> p(n + 1);

        if (n == 3) {
            cout << "2 1 3\n";
            continue;
        }

        if (n % 2 == 0) {
            int low = n / 2, high = n;
            for (int i = 1; i <= n; i++)
                p[i] = (i & 1) ? low-- : high--;
        } else {
            int m = n - 1;
            int low = m / 2, high = m;
            for (int i = 1; i <= m; i++)
                p[i] = (i & 1) ? low-- : high--;
            p[n] = n;
            swap(p[1], p[2]);
        }

        for (int i = 1; i <= n; i++)
            cout << p[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}
