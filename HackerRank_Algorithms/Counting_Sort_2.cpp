#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int freq[100] = {0};  // step 1: frequency array

    // step 2: count occurrences
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // step 3: print sorted numbers
    for (int i = 0; i < 100; i++) {
        while (freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    countingSort(arr, n);
    return 0;
}
