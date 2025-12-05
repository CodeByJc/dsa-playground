#include <iostream>
#include <string>
using namespace std;

// Recursive function to compute super digit
int superDigit(string n, int k) {
    long long sum = 0;

    // Step 1: sum the digits of n
    for (char c : n) {
        sum += c - '0';
    }

    // Step 2: multiply by k (only on first call)
    sum *= k;

    // Step 3: base case - if sum < 10, return it
    if (sum < 10) {
        return sum;
    }

    // Step 4: recursive call with the sum as a string
    return superDigit(to_string(sum), 1);
}

int main() {
    string n;
    int k;
    cin >> n >> k;

    cout << superDigit(n, k);
    return 0;
}
