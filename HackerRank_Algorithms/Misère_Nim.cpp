#include <iostream>
using namespace std;

string misereNim(int s[], int n) {
    bool allOnes = true;
    int xorSum = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != 1)
            allOnes = false;
        xorSum ^= s[i];
    }

    if (allOnes) {
        // Case 1: all piles have 1 stone
        if (n % 2 == 0)
            return "First";
        else
            return "Second";
    } else {
        // Case 2: at least one pile has > 1
        if (xorSum == 0)
            return "Second";
        else
            return "First";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        cout << misereNim(s, n) << endl;
    }

    return 0;
}
