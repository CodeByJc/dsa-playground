#include <iostream>
#include <cmath>
using namespace std;

const int MAX_N = 1000000;
bool isPrime[MAX_N + 1];

// Sieve of Eratosthenes to mark primes
void sieve(int N) {
    for (int i = 0; i <= N; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

// Count brave soldiers
int countBraveSoldiers(int N) {
    sieve(N);
    int count = 0;

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            int root = (int)sqrt(i);
            if (root * root != i) { // Ensure it's not a perfect square
                count++;
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    cout << countBraveSoldiers(N) << endl;
    return 0;
}
