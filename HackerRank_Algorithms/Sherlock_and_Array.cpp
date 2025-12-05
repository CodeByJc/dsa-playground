#include <iostream>
using namespace std;

string balancedSums(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum)
            return "YES";
        leftSum += arr[i];
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << balancedSums(arr, n) << endl;
    }
    return 0;
}
