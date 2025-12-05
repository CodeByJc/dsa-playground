#include <iostream>
#include <algorithm>
using namespace std;

void closestNumbers(int arr[], int n) {
    // Step 1: Sort array
    sort(arr, arr + n);

    // Step 2: Find minimum difference
    int minDiff = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff)
            minDiff = diff;
    }

    // Step 3: Print all pairs with that difference
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] == minDiff)
            cout << arr[i] << " " << arr[i + 1] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    closestNumbers(arr, n);
    return 0;
}
