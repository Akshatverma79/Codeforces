#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> tokens = {a, b, c};
        sort(tokens.begin(), tokens.end());
        cout << min(tokens[1] - tokens[0], tokens[2] - tokens[1]) << '\n';
    }

    return 0;
}