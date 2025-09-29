#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Step 1: remove duplicates from ranked
    vector<int> scores;
    scores.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); i++) {
        if (ranked[i] != ranked[i - 1])
            scores.push_back(ranked[i]);
    }

    vector<int> result;
    int n = scores.size();
    int idx = n - 1; // start from the lowest score

    // Step 2: check each player score
    for (int p : player) {
        while (idx >= 0 && p >= scores[idx]) {
            idx--; // move up the leaderboard
        }
        // rank is index+2 because idx points to just above player
        result.push_back(idx + 2);
    }

    return result;
}

int main() {
    int n; cin >> n;
    vector<int> ranked(n);
    for (int i = 0; i < n; i++) cin >> ranked[i];

    int m; cin >> m;
    vector<int> player(m);
    for (int i = 0; i < m; i++) cin >> player[i];

    vector<int> ans = climbingLeaderboard(ranked, player);
    for (int r : ans) cout << r << "\n";
    return 0;
}
