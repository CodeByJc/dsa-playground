#include <iostream>
#include <vector>
using namespace std;

int workbook(int n, int k, vector<int> arr) {
    int page = 1;  // current page number
    int special = 0;

    for (int i = 0; i < n; i++) {
        int problems = arr[i];
        for (int p = 1; p <= problems; p++) {
            // check if problem p is on the current page
            if (p == page)
                special++;

            // move to next page after every k problems or end of chapter
            if (p % k == 0 || p == problems)
                page++;
        }
    }

    return special;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << workbook(n, k, arr);
    return 0;
}
