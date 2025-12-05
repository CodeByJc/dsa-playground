#include <iostream>
using namespace std;

int maximizingXor(int l, int r) {
    int xorVal = l ^ r;  // difference pattern
    int result = 1;
    while (xorVal) {
        result <<= 1;    // count number of bits
        xorVal >>= 1;
    }
    return result - 1;   // all bits set to 1
}

int main() {
    int l, r;
    cin >> l >> r;
    cout << maximizingXor(l, r);
    return 0;
}
