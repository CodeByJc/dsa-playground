#include <iostream>
using namespace std;

int runningTime(int arr[], int n) {
    int shifts = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // shifting
            shifts++;              // count each shift
            j--;
        }

        arr[j + 1] = key; // insert key
    }

    return shifts;
}

int main() {
    int n;
    cin >> n;
    int arr[1000]; // static array

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << runningTime(arr, n) << endl;
    return 0;
}
