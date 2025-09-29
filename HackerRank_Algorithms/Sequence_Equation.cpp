#include <iostream>
#include <vector>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    int n = p.size();
    vector<int> result(n);

    for (int x = 1; x <= n; x++) {
        int first_index = 0;
        // Find index i such that p[i] == x
        for (int i = 0; i < n; i++) {
            if (p[i] == x) {
                first_index = i + 1; // +1 because problem is 1-based
                break;
            }
        }

        int second_index = 0;
        // Find index j such that p[j] == first_index
        for (int j = 0; j < n; j++) {
            if (p[j] == first_index) {
                second_index = j + 1; // +1 for 1-based
                break;
            }
        }

        result[x - 1] = second_index;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    vector<int> result = permutationEquation(p);

    for (int val : result) {
        cout << val << endl;
    }

    return 0;
}
