#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int in_degree[n + 1] = {0}; // Count of received gifts
    int out_degree[n + 1] = {0}; // Count of given gifts

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        out_degree[a]++; // a gives a gift
        in_degree[b]++;  // b receives a gift
    }

    for (int i = 1; i <= n; i++) {
        if (in_degree[i] == n - 1 && out_degree[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl; // No such youngest member found
    return 0;
}
