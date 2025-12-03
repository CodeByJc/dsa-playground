#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

static inline bool cmp(const string &a, const string &b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b; // lexicographic compare when lengths equal
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    string *arr = new string[n]; // dynamic array (no vector)
    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << '\n';
    }

    delete[] arr;
    return 0;
}
