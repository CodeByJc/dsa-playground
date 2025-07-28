#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int length) {
    int largest_element = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] > largest_element) {
            largest_element = arr[i];
        }
    }
    return largest_element;
}

void second_smallest_largest(int arr[], int length) {
    int largest_element = INT_MIN, second_largest = INT_MIN;
    int first_smallest = INT_MAX, second_smallest = INT_MAX;

    for (int i = 0; i < length; i++) {
        // Largest & second largest
        if (arr[i] > largest_element) {
            second_largest = largest_element;
            largest_element = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest_element) {
            second_largest = arr[i];
        }

        // Smallest & second smallest
        if (arr[i] < first_smallest) {
            second_smallest = first_smallest;
            first_smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != first_smallest) {
            second_smallest = arr[i];
        }
    }

    cout << "Second Largest Element in array : " << second_largest << endl;
    cout << "Second Smallest Element in array : " << second_smallest << endl;
}

int main() {
    int arr[5] = {1, 50, 3, 1000, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Largest Element: " << largest(arr, length) << endl;
    second_smallest_largest(arr, length);

    return 0;
}
