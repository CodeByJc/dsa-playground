#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int size1 = s1.size();
    int size2 = s2.size();
    
    string s3 = s1 + s2;
    int size3 = s3.size();

    cout << size1 << " " << size2 << endl;
    
    cout << s3 << endl;
    
    cout << s2[0];  
    for (int i = 1; i < size1; i++) {
        cout << s1[i];
    }
    cout << " ";
    
    cout << s1[0]; 
    for (int i = 1; i < size2; i++) {
        cout << s2[i];
    }

    return 0;
}
