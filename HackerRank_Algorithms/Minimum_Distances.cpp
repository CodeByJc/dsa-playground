#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int minimumDistances(int a[], int n) {
    unordered_map<int, int> lastIndex;  // store last occurrence of each number
    int minDist = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (lastIndex.count(a[i])) {
            int dist = i - lastIndex[a[i]];
            if (dist < minDist)
                minDist = dist;
        }
        lastIndex[a[i]] = i;  // update last seen index
    }

    return (minDist == INT_MAX) ? -1 : minDist;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << minimumDistances(a, n);
    return 0;
}
