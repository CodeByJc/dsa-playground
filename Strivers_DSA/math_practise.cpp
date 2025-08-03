#include <iostream>
using namespace std;

// Function to count digits of a number
int countDigits(int n) {
    if (n == 0) return 1;
    int counter = 0;
    while (n > 0) {
        n /= 10;
        counter++;
    }
    return counter;
}

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = (reversed * 10) + digit;
        n /= 10;
    }
    return reversed;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of Digits : " << countDigits(n) << endl;
    cout << "Reversed Number  : " << reverseNumber(n) << endl;
    cout << "Prime or Not     : " << (isPrime(n) ? "Yes" : "No") << endl;

    return 0;
}
