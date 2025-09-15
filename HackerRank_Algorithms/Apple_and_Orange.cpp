#include <iostream>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, int apples[], int m, int oranges[], int n) {
    int appleCount = 0;
    int orangeCount = 0;

    // Check apples
    for (int i = 0; i < m; i++) {
        int pos = a + apples[i]; // position where apple falls
        if (pos >= s && pos <= t) {
            appleCount++;
        }
    }

    // Check oranges
    for (int i = 0; i < n; i++) {
        int pos = b + oranges[i]; // position where orange falls
        if (pos >= s && pos <= t) {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;
}

int main() {
    int s, t; cin >> s >> t;
    int a, b; cin >> a >> b;
    int m, n; cin >> m >> n;

    int apples[m], oranges[n];

    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, m, oranges, n);

    return 0;
}
