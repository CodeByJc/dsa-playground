#include <iostream>
using namespace std;

int hurdleRace(int k, int height[], int n) {
    int maxHeight = 0;
    // Find the tallest hurdle
    for (int i = 0; i < n; i++) {
        if (height[i] > maxHeight) {
            maxHeight = height[i];
        }
    }
    // Calculate doses needed (if any)
    if (maxHeight <= k) {
        return 0; // can already jump all hurdles
    } else {
        return maxHeight - k; // doses needed
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int height[n];
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    cout << hurdleRace(k, height, n) << "\n";

    return 0;
}
