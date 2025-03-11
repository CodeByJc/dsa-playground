#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int gain, altitude = 0, maxAltitude = 0;

    for (int i = 0; i < n; i++) {
        cin >> gain;
        altitude += gain;
        if (altitude > maxAltitude) {
            maxAltitude = altitude;
        }
    }

    cout << maxAltitude << endl;
    return 0;
}
