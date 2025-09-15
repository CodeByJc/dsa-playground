#include <iostream>
using namespace std;

int sockMerchant(int n, int ar[]) {
    int pairs = 0;

    // Simple frequency counting
    for (int i = 0; i < n; i++) {
        if (ar[i] != -1) { // if not already counted
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (ar[i] == ar[j]) {
                    count++;
                    ar[j] = -1; // mark as used
                }
            }
            pairs += count / 2; // number of pairs from this color
        }
    }

    return pairs;
}

int main() {
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cout << sockMerchant(n, ar) << endl;

    return 0;
}
