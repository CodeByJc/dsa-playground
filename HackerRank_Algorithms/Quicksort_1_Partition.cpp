#include <iostream>
using namespace std;

void quickSort(int arr[], int n) {
    int pivot = arr[0]; // first element as pivot

    int left[n], equal[n], right[n];
    int l = 0, e = 0, r = 0;

    // Partition elements into left, equal, right
    for (int i = 0; i < n; i++) {
        if (arr[i] < pivot)
            left[l++] = arr[i];
        else if (arr[i] == pivot)
            equal[e++] = arr[i];
        else
            right[r++] = arr[i];
    }

    // Print result (left + equal + right)
    for (int i = 0; i < l; i++)
        cout << left[i] << " ";
    for (int i = 0; i < e; i++)
        cout << equal[i] << " ";
    for (int i = 0; i < r; i++)
        cout << right[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, n);
    return 0;
}
