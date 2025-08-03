#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> jc(0, 3);

    jc.push_back(1);
    jc.emplace_back(2);
    jc.emplace_back(23);
    jc.emplace_back(24);

    auto start = jc.begin();
    auto end = jc.end();

    // Uncomment to print first and last elements
    // cout << *(start) << " " << *(--end);

    // Uncomment to print last element
    // cout << jc.back();

    // Uncomment to iterate and print elements
    // for (start; start != end; start++) {
    //     cout << *(start) << " ";
    // }
    // cout << endl;

    // Insert elements into jc
    jc.insert(jc.begin(), 300);
    jc.insert(jc.end(), 200);
    jc.insert(jc.begin() + 1, 2, 7);

    vector<int> jc1(2, 50);
    jc.insert(jc.begin(), jc1.begin(), jc1.end());

    // Uncomment to print elements of jc1
    // for (auto start1 : jc1) {
    //     cout << start1 << " ";
    // }

    cout << jc.size() << " " << jc1.size();
    cout << jc.empty();

    // Uncomment to clear jc
    // jc.clear();

    jc.swap(jc1);

    for (auto start1 : jc1) {
        cout << start1 << " ";
    }

    return 0;
}
