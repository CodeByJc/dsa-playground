#include <bits/stdc++.h>
using namespace std;

// Function to check if an array is sorted
bool sorted(int arr[], int size) {
    bool isSorted = true;
    int i = 0;
    while (i < size - 1) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
        }
        if (!isSorted) return isSorted;
        i++;
    }
    return isSorted;
}



/* Selection Sort
void selection_sort(int arr[], int size) {
    int min_index;
    for (int i = 0; i < size - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
*/

/* Bubble Sort
void bubble_sort(int arr[], int size) {
    bool swapped = false;

    for (int i = size; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
*/

/* Insertion Sort
void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
*/

// Merge function for Merge Sort
void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

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

    for (int i = 0; i < (int)temp.size(); i++) {
        arr[low + i] = temp[i]; // Copy back to original array
    }
}

// Merge Sort function
void merge_sort(int arr[], int low, int high) {
    if (low >= high) return; // Base case

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int size = 10;
    int arr[size] = {5, 4, 2, 7, 1, 15, 3, 10, 8, 6};

    // selection_sort(arr, size);
    // bubble_sort(arr, size);
    // insertion_sort(arr, size);

    // merge_sort(arr, 0, size - 1);

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }

    if (sorted(arr, size))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}
