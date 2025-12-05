#include <iostream>
using namespace std;

int jumpingOnClouds(int c[], int n) {
    int jumps = 0;
    int i = 0;

    while (i < n - 1) {
        // Jump 2 if possible and safe, else jump 1
        if (i + 2 < n && c[i + 2] == 0)
            i += 2;
        else
            i += 1;
        jumps++;
    }

    return jumps;
}

int main() {
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    cout << jumpingOnClouds(c, n);
    return 0;
}
