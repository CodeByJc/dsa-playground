#include <iostream>
#include <vector>
using namespace std;

vector<int> serviceLane(int n, int t, vector<int>& width, vector<pair<int, int>>& cases) {
    vector<int> results;

    for (int i = 0; i < t; i++) {
        int start = cases[i].first;
        int end = cases[i].second;

        int minWidth = width[start];
        for (int j = start; j <= end; j++) {
            if (width[j] < minWidth)
                minWidth = width[j];
        }
        results.push_back(minWidth);
    }

    return results;
}

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> width(n);
    for (int i = 0; i < n; i++)
        cin >> width[i];

    vector<pair<int, int>> cases(t);
    for (int i = 0; i < t; i++) {
        int start, end;
        cin >> start >> end;
        cases[i] = {start, end};
    }

    vector<int> result = serviceLane(n, t, width, cases);

    for (int val : result)
        cout << val << endl;

    return 0;
}
