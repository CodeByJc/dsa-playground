#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
        cin >> brr[i];

    // Step 1: Find min and max numbers from brr[]
    int minVal = brr[0], maxVal = brr[0];
    for (int i = 1; i < m; i++) {
        if (brr[i] < minVal) minVal = brr[i];
        if (brr[i] > maxVal) maxVal = brr[i];
    }

    // Step 2: Create frequency arrays
    int size = maxVal - minVal + 1;
    int freqArr[size] = {0};
    int freqBrr[size] = {0};

    // Step 3: Count frequencies
    for (int i = 0; i < n; i++)
        freqArr[arr[i] - minVal]++;
    for (int i = 0; i < m; i++)
        freqBrr[brr[i] - minVal]++;

    // Step 4: Compare and print missing numbers
    for (int i = 0; i < size; i++) {
        if (freqArr[i] != freqBrr[i])
            cout << (i + minVal) << " ";
    }

    return 0;
}
