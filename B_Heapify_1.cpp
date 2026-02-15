#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            
            int nigga = i;
            while (nigga % 2 == 0) nigga /= 2;
            
            int nigga_val = a;
            while (nigga_val % 2 == 0) nigga_val /= 2;
            
            if (nigga != nigga_val) {
                possible = false;
            }
        }
        if (possible) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}