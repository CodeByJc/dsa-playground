#include <iostream>
using namespace std;

int pickingNumbers(int a[], int n) {
    int frequency[100] = {0};  // constraint: numbers between 1 and 99

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        frequency[a[i]]++;
    }

    int maxLength = 0;

    // Check pairs of adjacent numbers
    for (int i = 1; i < 100; i++) {
        int currentLength = frequency[i] + frequency[i - 1];
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << pickingNumbers(a, n) << "\n";

    return 0;
}
