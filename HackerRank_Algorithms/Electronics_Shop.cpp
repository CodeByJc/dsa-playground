#include <iostream>
using namespace std;

int getMoneySpent(int keyboards[], int k, int drives[], int d, int b) {
    int maxSpend = -1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < d; j++) {
            int total = keyboards[i] + drives[j];
            if (total <= b && total > maxSpend) {
                maxSpend = total;
            }
        }
    }
    return maxSpend;
}

int main() {
    int b, k, d;
    cin >> b >> k >> d;

    int keyboards[k];
    for (int i = 0; i < k; i++) {
        cin >> keyboards[i];
    }

    int drives[d];
    for (int i = 0; i < d; i++) {
        cin >> drives[i];
    }

    int result = getMoneySpent(keyboards, k, drives, d, b);
    cout << result << "\n";

    return 0;
}
