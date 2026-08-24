#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> two, three, six, oth;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 6 == 0) {
                six.push_back(x);
            } else if (x % 2 == 0) {
                two.push_back(x);
            } else if (x % 3 == 0) {
                three.push_back(x);
            } else {
                oth.push_back(x);
            }
        }
        for (int x : two) cout << x << " ";
        for (int x : oth) cout << x << " ";
        for (int x : three) cout << x << " ";
        for (int x : six) cout << x << " ";
        
        cout << endl;
    }
    return 0;
}