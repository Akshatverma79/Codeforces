#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int cntY = 0;
        for (char c : s) {
            if (c == 'Y') cntY++;
        }

        if (cntY <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
