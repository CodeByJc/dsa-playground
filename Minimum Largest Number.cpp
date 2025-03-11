#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findLargestNumber(vector<int>& arr) {
    int smallest = 10, secondSmallest = 10;

    // Find the two smallest numbers
    for (int num : arr) {
        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num < secondSmallest) {
            secondSmallest = num;
        }
    }

    // Form the largest number using the two smallest numbers
    cout << max(smallest * 10 + secondSmallest, secondSmallest * 10 + smallest) << endl;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    findLargestNumber(arr);
    return 0;
}
