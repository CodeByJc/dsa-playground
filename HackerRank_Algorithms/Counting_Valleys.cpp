#include <iostream>
using namespace std;

int countingValleys(int steps, char path[]) {
    int seaLevel = 0;      // current altitude
    int valleys = 0;       // count of valleys
    bool inValley = false; // flag to track if currently in valley

    for (int i = 0; i < steps; i++) {
        // update altitude
        if (path[i] == 'U') {
            seaLevel++;
        } else if (path[i] == 'D') {
            seaLevel--;
        }

        // check if we just came up to sea level from below
        if (seaLevel == 0 && path[i] == 'U') {
            valleys++;
        }
    }
    return valleys;
}

int main() {
    int steps;
    cin >> steps;

    char path[steps + 1];  // +1 for null terminator
    cin >> path;

    int result = countingValleys(steps, path);
    cout << result << "\n";

    return 0;
}
