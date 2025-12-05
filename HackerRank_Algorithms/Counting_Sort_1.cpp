#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int freq[100] = {0};  // frequency array (0-99)

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print all frequencies
    for (int i = 0; i < 100; i++) {
        cout << freq[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr, n);
    return 0;
}
