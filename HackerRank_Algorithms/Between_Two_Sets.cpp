#include <iostream>
using namespace std;

int getTotalX(int a[], int n, int b[], int m) {
    int count = 0;

    // Step 1: Find the range to check (from max of a[] to min of b[])
    int maxA = a[0], minB = b[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > maxA) maxA = a[i];
    }
    for (int i = 1; i < m; i++) {
        if (b[i] < minB) minB = b[i];
    }

    // Step 2: Check each number in the range
    for (int x = maxA; x <= minB; x++) {
        bool ok = true;

        // Check if x is divisible by all elements of a
        for (int i = 0; i < n; i++) {
            if (x % a[i] != 0) {
                ok = false;
                break;
            }
        }

        // Check if x divides all elements of b
        if (ok) {
            for (int i = 0; i < m; i++) {
                if (b[i] % x != 0) {
                    ok = false;
                    break;
                }
            }
        }

        if (ok) count++;
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    cout << getTotalX(a, n, b, m) << endl;

    return 0;
}
