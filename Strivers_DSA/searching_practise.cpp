#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves into one sorted array
void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Merge Sort (recursive)
void merge_sort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);       // Sort left half
    merge_sort(arr, mid + 1, high);  // Sort right half
    merge(arr, low, mid, high);      // Merge both halves
}

// Binary Search (iterative)
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 4, 3, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using merge sort
    merge_sort(arr, 0, size - 1);

    // Debug: Print sorted array
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int target = 5;
    int ind = binary_search(arr, size, target);

    if (ind == -1)
        cout << "The target is not present." << endl;
    else
        cout << "The target is at index: " << ind << endl;

    return 0;
}
