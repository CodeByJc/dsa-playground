#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;
    
    while (q--) {
        unsigned int n;
        cin >> n;
        cout << (~n) << endl;  // Flips all bits of n
    }
    
    return 0;
}
