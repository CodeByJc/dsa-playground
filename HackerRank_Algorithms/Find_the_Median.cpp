#include <iostream>
#include <algorithm>
using namespace std;

int findMedian(int arr[], int n) {
    sort(arr, arr + n);       // Step 1: Sort array
    int mid = n / 2;          // Step 2: Find middle index
    return arr[mid];          // Step 3: Return median
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << findMedian(arr, n);
    return 0;
}
