#include <iostream>
using namespace std;

// Print name n times using recursion
void printName(int i, int n) {
    if (i > n) return;
    cout << "Jaineel" << endl;
    printName(i + 1, n);
}

// Print numbers from 1 to n using recursion
void printNumbersIncreasing(int i, int n) {
    if (i > n) return;
    cout << i << endl;
    printNumbersIncreasing(i + 1, n);
}

// Print numbers from n to 1 using recursion
void printNumbersDecreasing(int i, int n) {
    if (n < i) return;
    cout << n << endl;
    printNumbersDecreasing(i, n - 1);
}

// Print sum of first n natural numbers
void printSumOfN(int n) {
    int sum = n * (n + 1) / 2;
    cout << "The sum of the first " << n << " numbers is: " << sum << endl;
}

// Calculate factorial using recursion
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Reverse array using recursion
void reverseArray(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

// Print array
void printArray(int arr[], int n) {
    cout << "The reversed array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 4;

    cout << "--- Print Name ---" << endl;
    printName(1, n);

    cout << "\n--- Numbers from 1 to n ---" << endl;
    printNumbersIncreasing(1, n);

    cout << "\n--- Numbers from n to 1 ---" << endl;
    printNumbersDecreasing(1, n);

    cout << "\n--- Sum of first n numbers ---" << endl;
    printSumOfN(n);

    cout << "\n--- Factorial ---" << endl;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    int arr[n];
    cout << "\n--- Enter " << n << " elements for the array ---" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
