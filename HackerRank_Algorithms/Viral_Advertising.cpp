#include <iostream>
using namespace std;

int viralAdvertising(int n) {
    int shared = 5;       // Initially shared with 5 people
    int cumulative = 0;   // Total likes
    for (int day = 1; day <= n; day++) {
        int liked = shared / 2;    // Half of the people like the ad
        cumulative += liked;       // Add to cumulative likes
        shared = liked * 3;        // Each liked person shares with 3 friends
    }
    return cumulative;
}

int main() {
    int n;
    cin >> n;
    cout << viralAdvertising(n) << endl;
    return 0;
}
