#include <iostream>
#include <cmath>  // for abs()

using namespace std;

string catAndMouse(int x, int y, int z) {
    int distA = abs(z - x);
    int distB = abs(z - y);

    if (distA < distB) {
        return "Cat A";
    } else if (distB < distA) {
        return "Cat B";
    } else {
        return "Mouse C";
    }
}

int main() {
    int q;
    cin >> q;  // number of queries

    for (int i = 0; i < q; i++) {
        int x, y, z;
        cin >> x >> y >> z;

        cout << catAndMouse(x, y, z) << "\n";
    }

    return 0;
}
