#include <iostream>

int main() {
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        int n, m, d;
        std::cin >> n >> m >> d;
        
        int max_above = d / m;
        int max_height = max_above + 1;
        
        int min_towers = (n + max_height - 1) / max_height;
        
        std::cout << min_towers << std::endl;
    }
    return 0;
}