#include <iostream>
using namespace std;

long taumBday(long b, long w, long bc, long wc, long z) {
    // Calculate minimal cost for black and white gifts
    long costBlack = min(bc, wc + z);
    long costWhite = min(wc, bc + z);

    // Total minimal cost
    return b * costBlack + w * costWhite;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long b, w, bc, wc, z;
        cin >> b >> w;
        cin >> bc >> wc >> z;
        cout << taumBday(b, w, bc, wc, z) << endl;
    }
    return 0;
}
