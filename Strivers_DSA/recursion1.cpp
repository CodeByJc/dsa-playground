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

// Print sum of first n natural numbers (formula-based)
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
        reverseAr
