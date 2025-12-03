#include <iostream>
#include <algorithm>
using namespace std;

int luckBalance(int k, int contests[][2], int n) {
    int important[1000], impCount = 0;
    int totalLuck = 0;

    // Separate important & unimportant contests
    for (int i = 0; i < n; i++) {
        int luck = contests[i][0];
        int importance = contests[i][1];

        if (importance == 1) {
            important[impCount++] = luck;
        } else {
            totalLuck += luck; // lose all unimportant contests
        }
    }

    // Sort important contests descending
    sort(important, important + impCount, greater<int>());

    // Lose top k important contests
    for (int i = 0; i < impCount; i++) {
        if (i < k)
            totalLuck += important[i];  // lose (gain luck)
        else
            totalLuck -= important[i];  // must win (lose luck)
    }

    return totalLuck;
}

int main() {
    int n, k;
    cin >> n >> k;

    int contests[1000][2];
    for (int i = 0; i < n; i++)
        cin >> contests[i][0] >> contests[i][1];

    cout << luckBalance(k, contests, n) << endl;

    return 0;
}
