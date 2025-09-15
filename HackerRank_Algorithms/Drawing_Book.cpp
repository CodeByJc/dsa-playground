#include <iostream>
using namespace std;

int pageCount(int n, int p) {
    // From the front
    int fromFront = p / 2;

    // From the back
    int fromBack = (n / 2) - (p / 2);

    // Minimum of both
    return (fromFront < fromBack) ? fromFront : fromBack;
}

int main() {
    int n, p;
    cin >> n >> p;

    cout << pageCount(n, p) << endl;

    return 0;
}
