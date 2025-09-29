#include <iostream>
#include <cmath>
using namespace std;

int squares(int a, int b) {
    int start = ceil(sqrt(a));  // smallest integer whose square >= a
    int end = floor(sqrt(b));   // largest integer whose square <= b
    return max(0, end - start + 1); // count of perfect squares
}

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << squares(a, b) << endl;
    }
    return 0;
}
