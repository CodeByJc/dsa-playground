#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int n = c.size();
    int energy = 100;
    int position = 0;

    do {
        position = (position + k) % n; // jump to next cloud
        energy -= 1 + 2 * c[position];  // 1 for jump + 2 if thunderhead
    } while (position != 0);           // stop when back at start

    return energy;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    cout << jumpingOnClouds(c, k) << endl;

    return 0;
}
