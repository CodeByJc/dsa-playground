#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> stones(int n, int a, int b) {
    set<int> results;  // use set to avoid duplicates
    for (int i = 0; i < n; i++) {
        int val = i * b + (n - 1 - i) * a;
        results.insert(val);
    }
    return vector<int>(results.begin(), results.end());
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> result = stones(n, a, b);
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i != result.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
