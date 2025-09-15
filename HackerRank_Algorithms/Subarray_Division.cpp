#include <iostream>
using namespace std;

int birthday(int s[], int n, int d, int m) {
    int count = 0;

    // Loop through all possible starting positions
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        // Take m consecutive elements and sum them
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }
        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int d, m;
    cin >> d >> m;

    cout << birthday(s, n, d, m) << endl;

    return 0;
}
