#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long dist[105];
    int u[5005], v[5005], w[5005];

    for (int i = 1; i <= n; i++) {
        dist[i] = 1000000000000000LL;
    }
    dist[1] = 0;

    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i] >> w[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            if (u[j] == i && dist[i] != 1000000000000000LL) {
                if (dist[i] + w[j] < dist[v[j]]) {
                    dist[v[j]] = dist[i] + w[j];
                }
            }
            if (v[j] == i && dist[i] != 1000000000000000LL) {
                if (dist[i] + w[j] < dist[u[j]]) {
                    dist[u[j]] = dist[i] + w[j];
                }
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (dist[i] >= 1000000000000000LL) {
            cout << -1 << endl;
        } else {
            cout << dist[i] << endl;
        }
    }

    return 0;
}