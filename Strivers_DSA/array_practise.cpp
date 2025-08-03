#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in an array
int largest(int arr[], int length) {
    int largest_element = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] > largest_element) {
            largest_element = arr[i];
        }
    }
    return largest_element;
}

// Function to find second largest and second smallest elements
void second_smallest_largest(int arr[], int length) {
    int largest_element = INT_MIN, second_largest = INT_MIN;
    int first_smallest = INT_MAX, second_smallest = INT_MAX;

    for (int i = 0; i < length; i++) {
        // Largest & second largest
        if (arr[i] > largest_element) {
            second_largest = largest_element;
            largest_element = arr[i];
        } 
        else if (arr[i] > second_largest && arr[i] != largest_element) {
            second_largest = arr[i];
        }

        // Smallest & second smallest
        if (arr[i] < first_smallest) {
            second_smallest = first_smallest;
            first_smallest = arr[i];
        } 
        else if (arr[i] < second_smallest && arr[i] != first_smallest) {
            second_smallest = arr[i];
        }
    }

    cout << "Second Largest Element in array : " << second_largest << endl;
    cout << "Second Smallest Element in array : " << second_smallest << endl;
}

// Function to find the second largest element
int find_second_max_element(int arr[], int size) {
    int max_element = INT_MIN;
    int second_max_element = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max_element) {
            second_max_element = max_element;
            max_element = arr[i];
        } 
        else if (arr[i] < max_element && arr[i] > second_max_element) {
            second_max_element = arr[i];
        }
    }

    if (second_max_element == INT_MIN) {
        cout << "No valid second largest element (all elements may be equal or only one element)." << endl;
        return INT_MIN;
    }
    return second_max_element;
}

// Function to check if an array is sorted in non-decreasing order
bool sorted(int arr[], int size) {
    if (size < 2) return true;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[5] = {1, 50, 3, 1000, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest Element: " << largest(arr, length) << endl;

    second_smallest_largest(arr, length);

    cout << "Second Largest Element (via find_second_max_element): "
         << find_second_max_element(arr, length) << endl;

    cout << "Array sorted? : " << (sorted(arr, length) ? "Yes" : "No") << endl;

    return 0;
}
