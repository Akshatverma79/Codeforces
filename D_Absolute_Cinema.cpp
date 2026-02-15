#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> f(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }

        vector<long long> a(n + 1);
        for (int i = 2; i < n; i++) {
            a[i] = ((f[i + 1] - f[i]) - (f[i] - f[i - 1])) / 2;
        }
        
        long long d1 = f[2] - f[1];
        long long dn = f[n] - f[n - 1];
        
        long long sum = 0;
        for (int i = 2; i < n; i++) sum += a[i];
        long long curr= 0;
        for (int i = 2; i < n; i++) {
            curr += a[i] * (i - 1);
        }
        a[n] = (f[1] - curr) / (n - 1);
        
        a[1] = d1 + sum + a[n];

        for (int i = 1; i <= n; i++) {
            cout << a[i] << (i == n ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}