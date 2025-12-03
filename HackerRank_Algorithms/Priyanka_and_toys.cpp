#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    long long* w = new long long[n];
    for (int i = 0; i < n; ++i) cin >> w[i];

    sort(w, w + n);

    int containers = 0;
    int i = 0;
    while (i < n) {
        long long base = w[i];     // min weight in this container
        ++containers;              // start a new container
        ++i;
        // pack as many as fit: weight <= base + 4
        while (i < n && w[i] <= base + 4) ++i;
    }

    cout << containers << '\n';

    delete[] w;
    return 0;
}
