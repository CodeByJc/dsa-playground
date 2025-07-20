#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int calculateWishValueSum(int N, vector<int>& A) {
    int max_right = 0, min_left = A[0], wishSum = 0;
    vector<int> max_right_arr(N);
    
    // Compute max_right dynamically
    max_right_arr[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        max_right_arr[i] = max(A[i], max_right_arr[i + 1]);
    }

    // Compute min_left on-the-fly & sum wish values
    for (int i = 0; i < N; i++) {
        max_right = max_right_arr[i];
        min_left = (i == 0) ? A[0] : min(min_left, A[i]);
        wishSum += abs(max_right - min_left);
    }

    return wishSum;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << calculateWishValueSum(N, A) << endl;
    return 0;
}
