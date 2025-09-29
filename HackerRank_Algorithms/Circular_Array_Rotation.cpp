#include <iostream>
#include <vector>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    vector<int> result;

    // Effective rotations (in case k > n)
    k = k % n;

    for (int q : queries) {
        // Compute original index before rotation
        int original_index = (q - k + n) % n;
        result.push_back(a[original_index]);
    }

    return result;
}

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];

    vector<int> result = circularArrayRotation(a, k, queries);

    for (int val : result) {
        cout << val << endl;
    }

    return 0;
}
