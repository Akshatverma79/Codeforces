#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
        long long flips = m / k;
        long long remaining_time = m % k;
        long long sand_on_top;
        if (k >= s) {
            sand_on_top = s;
        } 
        else {
            if (flips % 2 == 0) {
                sand_on_top = s;
            }
            else {
                sand_on_top = k;
            }
        }

        long long answer = sand_on_top - remaining_time;
        if (answer < 0) {
            answer = 0;
        }

        cout << answer << "\n";
    }

    return 0;
}
