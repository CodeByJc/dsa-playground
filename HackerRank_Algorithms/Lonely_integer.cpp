#include <iostream>
using namespace std;

int lonelyinteger(int a[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= a[i];  // XOR all elements
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << lonelyinteger(a, n);
    return 0;
}
