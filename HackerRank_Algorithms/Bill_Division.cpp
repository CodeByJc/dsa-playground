#include <iostream>
using namespace std;

void bonAppetit(int bill[], int n, int k, int b) {
    int total = 0;

    // Calculate total cost except the item Anna didn't eat
    for (int i = 0; i < n; i++) {
        if (i != k) {
            total += bill[i];
        }
    }

    int fairShare = total / 2;

    if (b == fairShare) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - fairShare << endl; // refund amount
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int bill[n];
    for (int i = 0; i < n; i++) {
        cin >> bill[i];
    }

    int b;
    cin >> b;

    bonAppetit(bill, n, k, b);

    return 0;
}
