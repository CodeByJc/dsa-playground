#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the N-th prime and return its square
int nthPrimeSquare(int N) {
    int count = 0, num = 2;
    
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == N) return num * num;
        }
        num++;
    }
}

int main() {
    int N;
    cin >> N;
    cout << nthPrimeSquare(N) << endl;
    return 0;
}
