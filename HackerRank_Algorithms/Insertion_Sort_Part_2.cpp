#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort2(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];      // element to insert
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;

        // Print array after each iteration
        printArray(arr, n);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];  // static array (no vectors)

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort2(n, arr);

    return 0;
}
