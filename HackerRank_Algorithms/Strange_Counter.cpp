#include <iostream>
using namespace std;

long strangeCounter(long t) {
    long start = 1;
    long value = 3;

    // Find which cycle 't' falls into
    while (t >= start + value) {
        start = start + value;
        value *= 2;
    }

    // Calculate the value at time t
    return value - (t - start);
}

int main() {
    long t;
    cin >> t;
    cout << strangeCounter(t) << endl;
    return 0;
}
