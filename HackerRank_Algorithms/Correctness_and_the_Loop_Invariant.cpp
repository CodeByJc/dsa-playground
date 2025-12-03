#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];  // static array

    // input elements
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // insertion sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // insert key
    }

    // print sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
