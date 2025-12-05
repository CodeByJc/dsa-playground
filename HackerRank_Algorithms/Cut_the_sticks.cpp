#include <iostream>
#include <algorithm>
using namespace std;

void cutTheSticks(int arr[], int n) {
    sort(arr, arr + n);   // Step 1: sort ascending
    int remaining = n;

    cout << remaining << endl;  // Always print first count

    for (int i = 1; i < n; i++) {
        // When a new smaller stick length appears
        if (arr[i] != arr[i - 1]) {
            remaining = n - i;
            cout << remaining << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cutTheSticks(arr, n);
    return 0;
}
