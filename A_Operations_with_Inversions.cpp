#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, x, mx = 0, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x < mx) ans++;      
            else mx = x;            
        }
        cout << ans << "\n";
    }
    return 0;
}
